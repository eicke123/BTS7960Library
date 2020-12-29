/*
  BTS7960.h - Library to control the BTS7960 motor driver
  Created by Christoph Eickhoff, August 28, 2018.
  Released into the public domain.
*/
#ifndef BTS7960_h
#define BTS7960_h

#include "Arduino.h"

class BTS7960
{
  public:
    BTS7960(uint8_t RPWM,uint8_t LPWM,uint8_t L_EN,uint8_t R_EN);
    void setSpeed( int16_t pwm);
    void enable();
    void disable();
    void stop();

  private:
    uint8_t _RPWM;
    uint8_t _LPWM;
    uint8_t _L_EN;
    uint8_t _R_EN;
};
#endif
