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

