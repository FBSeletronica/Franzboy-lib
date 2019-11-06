/*
  Franzboy.h - Franzboy board library
  Written by Fábio Souza

*/

#ifndef FRANZBOY_H_
#define FRANZBOY_H_

#include <Arduino.h>


#define setBit(val,bit)       (val |= (1<<bit))
#define clearBit(val,bit)     (val &= ~(1<<bit))
#define testBit(val,bit)      (val & (1<<bit))
#define toggleBit(val, bit)   (val ^= (1<<bit))


/*
 * The following constants can be used with the readButton()
 * method.
 */

const byte BT_DOWN  = 4;
const byte BT_LEFT  = 2;
const byte BT_UP    = 3;
const byte BT_RIGHT = 5;
const byte BT_A     = 6;
const byte BT_B     = 7;

const byte BUZZER   = 9;
const byte LED      = 13;
const byte IR       = 10;

const byte BUZZER_PIN  = PB1;
const byte LED_PIN     = PB5;


/*
 * These constants can be use for comparison with the value returned
 * by the readButton() method.
 */
const boolean PRESSIONADO   = LOW;
const boolean SOLTO         = HIGH;


class _Franzboy {
private:
 
    
public:
  _Franzboy();
  
  
  /*
   * Lê o estado atual de um botão. 
   * Retorna LOW se o botão estiver pressionado
   * Retorna HOGH se o Bbotão estiver solto.
   */
  boolean leBotao(byte bt);

  /*
   * Liga o LED(pino 13) da placa
   */
  void ligaLED(void);

  /*
   * Desliga o LED(pino 13) da placa
   */
  void desligaLED(void);

  /*
   * Inverte o estado do LED(pino 13) da placa
   */
  void inverteLED(void);

  /*
  * emite um beep sonoro pelo tempo passaso como paramêtro
  */
  void beep(unsigned int tempo);


  void tone(unsigned int freq);
  void tone(unsigned int freq, unsigned long duration);
  void noTone();
  
};



extern _Franzboy Franzboy;

#endif // FRANZBOY_H_
