
/*
  Franzboy Blink

 Este exemplo pisca o LED( pino D13 - PB5) da Franzboy usando 
 a biblioteca de abstração criada para a Franzboy

 Criado em 2 deNovembro de 2019
 por Fábio Souza

 */

#include <Franzboy.h>


void setup() {
  // Não há nenhuma ação na função setup
}

void loop() {
  Franzboy.ligaLED();           //Acende o LED
  delay(1000);                  //espera 1 segundo
  Franzboy.desligaLED();        //apaga o LED
  delay(1000);                  //espera 1 segundo
}


