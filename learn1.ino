/**
* Projeto 1 -> Desenvolvido na equipe de robótica da Católica de SC
* 
* @team WickedBotz Católica de SC Joinville
*
* @author: Maria Clara Seixa Scheffel
*/

#define LARANJA 3
#define TEMPO   1000
#define AMARELO 5
#define VERDE   6
void setup() 
{
  pinMode(LARANJA, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop()
{
  digitalWrite(LARANJA, HIGH);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERDE, HIGH);
  // verde
  analogWrite(LARANJA,0);
  analogWrite(AMARELO,0);
  analogWrite (VERDE,255);
  delay(TEMPO);
  //amarelo
  analogWrite(LARANJA,255);
  analogWrite(AMARELO,0);
  analogWrite (VERDE,255);
  delay(TEMPO);
  //vermelho
  analogWrite(LARANJA,255);
  analogWrite(AMARELO,0);
  analogWrite (VERDE,0);
  delay(TEMPO);
}
