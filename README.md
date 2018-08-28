## BTS7960Library
Arduino library to control the BTS7960 motor driver
## Install the library
Download the repository as zip and import via Arduino IDE "Sketch" --> "include library" --> "add .zip library".
## Usage
Include the library into your project via Arduino IDE "Sketch" --> "include library" --> "BTS7960" or just add the line in your code: 
```
#include <BTS7960.h>
```
Then create an instance of the BTS7960 
```
BTS7960 motor1(RPWM, LPWM, L_EN, R_EN);
```

## Methods

|Method | Params  | Description
| :----- | :---------- | :------
|**enable** |   none | enable the motor driver
|**disable** |  none | disable the motor driver
|**stop** |     none  | full stop, same as setSpeed(0)
|**setSpeed** | int8_t pwm  | set the pwm value in the range of -255 to 255 (minus backward and positive forward)
