#include "BTS7960.h"

//BTS7960(uint8_t RPWM,uint8_t LPWM,uint8_t L_EN,uint8_t R_EN)
BTS7960 m1(10,11,12,9);



void setup() {
}

void loop() {

  //enable the BTS7960 Motordriver
  m1.enable();

  //increase to fullspeed
  for(int speed = 0 ; speed < 255; speed++) m1.setSpeed(speed);
  // decrease speed to full backwards
  for(int speed = 255 ; speed > -255; speed--) m1.setSpeed(speed);

  // stop the motor, same as m1.setSpeed(0)
  m1.stop();

  m1.disable();



}
