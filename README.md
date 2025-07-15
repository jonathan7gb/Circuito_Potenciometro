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

Link do circuito feito na plataforma WOKWI
```
  https://wokwi.com/projects/433954241947817985
```

