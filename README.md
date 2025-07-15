# Circuito_Potenciometro

Código do Banco de Dados
```mysql
CREATE DATABASE banco_de_dadpotenciometroos_iot_teste; //cria o banco
USE  banco_de_dados_iot_teste; //ativa o banco
  
CREATE TABLE potenciometro(     //Cria a tabela onde os dados serão armazenados
   id_potenciometro INT AUTO_INCREMENT PRIMARY KEY,
   valor_potenciometro INT,
   data_hora_valor DATETIME DEFAULT CURRENT_TIMESTAMP
);
  
SELECT * FROM potenciometro; //printa os dados

truncate potenciometro; //Remove todos os dados da tabela
```

<hr>

Link do circuito feito na plataforma WOKWI
-> https://wokwi.com/projects/433954241947817985

<hr>

Para fazer a conexão do banco de dados com a nuvem, utilizamos o Railway, onde as credenciais dele, como user, host, e porta, pegamos do Railway e criamos uma nova conexão no MySQL Workbench.
Link do site do Railway -> https://railway.com/

<hr>

-> Para instalar o NODE RED e utilizar na máquina, use os seguintes comandos: 

```cmd
npm install -g --unsafe-perm node-red
```

```cmd
set Path=%path%;%userprofile%\AppData\Roaming\npm;
```

```cmd
node-red
```

Documento usado como material de apoio para realizar o circuito: 
<br>
-> https://docs.google.com/document/d/1MJhCqAjCupHCQtknQJtH1WAvGGjnZA43_WHnpSI7vvQ/edit?pli=1&tab=t.0#heading=h.vc5v2h8ddjcl

<hr>

# FOTOS DO CIRCUITO FÍSICO
- Utilizamos um ESP32 DevKit 1 Dev Module
- 1 Potenciometro
- 1 Protoboard
- 2 Leds
- 2 Resistores
- 9 fios conectores

<img width="709" height="945" alt="image" src="https://github.com/user-attachments/assets/cb580fcb-46ba-4e6d-a779-3d4f0b959b3d" />
<img width="709" height="945" alt="image" src="https://github.com/user-attachments/assets/25835740-2b9f-44db-90f9-dd8193dfdcd0" />
<img width="709" height="945" alt="image" src="https://github.com/user-attachments/assets/1eadf4b6-89ab-47ff-82f0-64cf398903b5" />

<hr>

# PRINT DO NODE RED, ONDE FOI FEITA A PARTE DE COMUNICAÇÃO ENTRE O BANCO DE DADOS E O CIRCUITO

<img width="777" height="545" alt="image" src="https://github.com/user-attachments/assets/867458cd-56b7-4f41-9649-896c34d047e7" />

<hr>

# PRINT DA REPRESENTAÇÃO VISUAL DO CIRCUITO NO WOKWI

<img width="668" height="444" alt="image" src="https://github.com/user-attachments/assets/72fb7738-8fef-4dd4-a1ae-6f0eca59e406" />





