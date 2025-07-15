//conectar ao wi-fi
//conectar ao broker

#include <Esp32WifiManager.h>
#include <PubSubClient.h>

const int PONT = 34;

const char* ssid = "Kotry";
const char* password = "12345567";//incluir senha na implementação física
const char* mqtt_server = "test.mosquitto.org";


WiFiClient WOKWI_Client;//cria um objeto wi-fi para comunicação
PubSubClient client(WOKWI_Client);//cria um objeto client mqtt associado ao client wi-fi


void setup_wifi() {

  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);// ativa o modo cliente do wi-fi (sta -> station mode > ele se conecta a u mponto de acesso.)
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  randomSeed(micros());

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}



void reconnect_mqtt() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    //String clientId = "ESP8266Client-";
    //clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect("WOKWI_Client")) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      //client.publish("outTopic", "hello world");
      // ... and resubscribe
      //client.subscribe("inTopic");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void wifi_on(){
  if(client.connected()){
  digitalWrite(2, HIGH);}
  else
 { digitalWrite(2, LOW);}
}

void publica_mqtt(){
  int valor_pot = analogRead(PONT);
  Serial.print("Valor lido do potenciômetro: ");
  Serial.println(valor_pot);

  bool enviado = client.publish("public_pot_jon", String(valor_pot).c_str());
  if (enviado) {
    Serial.println("Publicado no MQTT com sucesso.");
  } else {
    Serial.println("Falha ao publicar no MQTT.");
  }
  delay(1000);
}


void broker_on(){
 if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(19, HIGH);
  } else {
    digitalWrite(19, LOW);
  }
}



void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);
   setup_wifi();
   client.setServer(mqtt_server, 1883);
   pinMode(PONT, INPUT);
   pinMode(2, OUTPUT);   // LED do Wi-Fi (ou onboard)
   pinMode(19, OUTPUT);  // LED do broker
}

void loop() {
    if (!client.connected()) {
    reconnect_mqtt();
  }
  wifi_on();
  broker_on();
  publica_mqtt();
  client.loop();
     
}
