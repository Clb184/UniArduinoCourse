#ifndef LIBCLBMAIN_INCLUDED
#define LIBCLBMAIN_INCLUDED

//Main libraries and that stuff
#include <stdint.h>
#include <Arduino.h>

//Defining some macros that clarify stuff
#define PIN_ON	HIGH
#define PIN_OFF LOW
#define INPUT_OK HIGH
#define INPUT_FAIL LOW

//Some function macros as well
#define InitializePinI(x) pinMode(x, INPUT)
#define InitializePinO(x) pinMode(x, OUTPUT)
#define PinLightOn(x) digitalWrite(x, PIN_ON)
#define PinLightOff(x) digitalWrite(x, PIN_OFF)

#endif