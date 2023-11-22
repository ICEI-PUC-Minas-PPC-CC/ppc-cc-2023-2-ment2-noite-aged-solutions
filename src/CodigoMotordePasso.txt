#include <Stepper.h>

const int PassoPorVolta = 500;  // Passo por Volta do Motor de Passo
Stepper MotorP(PassoPorVolta, 8, 10, 9, 11);


void setup() {
 MotorP.setSpeed(60);
}

void loop() {


  for (int i=0; i<5; i++) {
  MotorP.step(409.2);//gira 72 graus
  delay(1000);
  }
  MotorP.step(-2046);//gira 360 graus negativos
  delay(1000);

}