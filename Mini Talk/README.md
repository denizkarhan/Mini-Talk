# Mini Talk

#### The goal of this project is to create two executables: a server and a client.

#### - The client will send information (a string) to the server using UNIX signals.

#### - The server must correctly receive and interpret this information, then display it.

#### The Makefile is used to easily compile the server and the client executables

### Behaviour:

1) By running the server executable we start up the server and it displays its process id:
<img width="499" alt="1" src="https://user-images.githubusercontent.com/81527587/166075880-e1be7171-ec3a-4b04-9861-815f632d317f.png">


2) By running the client with the process id from the server we can send strings to the server
<img width="501" alt="2" src="https://user-images.githubusercontent.com/81527587/166075884-369d4bc1-bd4e-44ab-aa7b-4ecbedae4781.png">


3) Server receives bits containing the information, translates them to characters and prints the result as a string:
<img width="500" alt="3" src="https://user-images.githubusercontent.com/81527587/166075900-225ec802-a015-4e75-8b29-78b1dd8c3aed.png">


#### Additional behaviour:
1) The client can also send Unicode format characters
<img width="500" alt="3 5" src="https://user-images.githubusercontent.com/81527587/166075901-269010f5-df3e-4aef-88d4-64b84a6af2e3.png">


2) The server interprets and displays them correctly <br />
<img width="207" alt="4" src="https://user-images.githubusercontent.com/81527587/166075904-33852b0e-c040-4d0b-b592-9b622582429e.png">


