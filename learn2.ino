/**
* Projeto 2 -> Desenvolvido na equipe de robótica da Católica de SC
* 
* Conecta na porta serial - tenho que ler mais sobre isso...
*      https://en.wikipedia.org/wiki/Serial_port
* 
* @team WickedBotz Católica de SC Joinville
*
* @author: Maria Clara Seixa Scheffel
*/

#define PIN_USED     3
#define BAUD_RATE 9600

void setup() {
  Serial.begin( BAUD_RATE );
  Serial.println("Iniciado projeto - uso serial");
  pinMode( PIN_USED , OUTPUT );
}

void loop() {
    if( Serial.available() ) {
        char dado = Serial.read();
        switch(dado) {
            case 'l':
                Serial.println("Ligado led");
                digitalWrite(3, HIGH);
                break;
             case 'd':
                Serial.println("Desligado led");
                break;
             default:
                Serial.println("Xii... deu problema na Kombi...");
        }
     }
}
