/*
  Franzboy.cpp - Franzboy board library
  Written by Fábio Souza

*/

#include "Franzboy.h"

_Franzboy Franzboy;

_Franzboy::_Franzboy() {
  for (byte p=2; p<8; p++) {
    clearBit(DDRD,p);          //configure pins PD2 to PD7 as INPUT pins
    setBit(PORTD,p);           //enable pull up
  }
  setBit(DDRB,BUZZER_PIN);     //configure pin PB1 as OUTPUT
  setBit(DDRB,LED_PIN);        //configure pin PB1 as OUTPUT

}

boolean _Franzboy::leBotao(byte bt) {
  int val = testBit(PIND,bt);
  return  val;
}
/*
* Liga o LED(pino 13) da placa
*/
void _Franzboy::ligaLED(void) {
  setBit(PORTB,5);      //liga led
}
/*
* Desliga o LED(pino 13) da placa
*/
void _Franzboy::desligaLED(void) {
  clearBit(PORTB,5);    //apaga led
}

/*
* Inverte o estado do LED(pino 13) da placa
*/
void _Franzboy::inverteLED(void){
  toggleBit(PORTB, 5); //inverte o estado do LED 
}

/*
  * emite um beep sonoro pelo tempo passaso como paramêtro
  */
void _Franzboy::beep(unsigned int tempo){

      if(tempo > 1000) tempo = 1000;
     _Franzboy::tone(440,tempo);
     delay(tempo);
     _Franzboy::noTone();
     delay(tempo);
  }



void _Franzboy::tone(unsigned int freq) {
  if (freq > 0)
    ::tone(BUZZER, freq);
  else
    ::noTone(BUZZER);
}

void _Franzboy::tone(unsigned int freq, unsigned long duration) {
  if (freq > 0)
    ::tone(BUZZER, freq, duration);
  else
    ::noTone(BUZZER);
}

void _Franzboy::noTone() {
  ::noTone(BUZZER);
}
