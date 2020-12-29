/*
  BTS7960.cpp - Library to control the BTS7960 motor driver
  Created by Christoph Eickhoff, August 28, 2018.
  Released into the public domain.
*/
#include "BTS7960.h"

BTS7960::BTS7960(uint8_t RPWM,uint8_t LPWM,uint8_t L_EN,uint8_t R_EN){
  _RPWM = RPWM;
  _LPWM = LPWM;
  _L_EN = L_EN;
  _R_EN = R_EN;
  pinMode(_RPWM, OUTPUT);
  pinMode(_LPWM, OUTPUT);
  pinMode(_L_EN, OUTPUT);
  pinMode(_R_EN, OUTPUT);

}

void BTS7960::setSpeed(int16_t pwm){
  if (pwm < -255 || pwm > 255)
  {
    // out of range stop the motor
    stop();
  }else{
    if (pwm < 0 ){
     analogWrite(_LPWM,0);
     analogWrite(_RPWM,-pwm);
    }else{
     analogWrite(_RPWM,0);
     analogWrite(_LPWM,pwm);
    }
  }
}

void BTS7960::enable(){
  digitalWrite(_R_EN,1);
  digitalWrite(_L_EN,1);
}

void BTS7960::disable(){
  digitalWrite(_R_EN,0);
  digitalWrite(_L_EN,0);
}

void BTS7960::stop(){
  analogWrite(_LPWM,0);
  analogWrite(_RPWM,0);
}
