
/*
  Franzboy Toogle

 Este exemplo pisca o LED( pino D13 - PB5) da Franzboy usando 
 a função InverteLED da biblioteca

 Criado em 6 deNovembro de 2019
 por Fábio Souza

 */

#include <Franzboy.h>


void setup() {
  // Não há nenhuma ação na função setup
}

void loop() {
  Franzboy.inverteLED();        //inverte estado do LED
  delay(1000);                  //espera 1 segundo
}