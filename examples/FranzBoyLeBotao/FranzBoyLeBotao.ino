
/*
  Franzboy ReadBT

 Este exemplo exibe como ler as teclas do FranzBoy

 Criado em 6 deNovembro de 2019
 por Fábio Souza

 */

#include <Franzboy.h>


void setup() {
  // Não há nenhuma ação na função setup
}

void loop() {

  /*
   * Leitura do botão
   * 
   * use a função leBotao(byte bt);
   * Usar as seguintes constantes como parametros:
   * BT_DOWN
   * BT_LEFT
   * BT_UP
   * BT_RIGHT
   * BT_A
   * BT_B
   */
  
  //Leitura do botão e acionamento do LED
  if(Franzboy.leBotao(BT_A) == PRESSIONADO){
    Franzboy.ligaLED();
    delay(10);
    Franzboy.desligaLED();
  }


}
