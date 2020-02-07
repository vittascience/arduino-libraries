#ifndef vittascience_h  
#define vittascience_h
#include <SoftwareSerial.h>  
#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_BMP280.h"
#include "SDVitta.h"

extern Adafruit_BMP280 bmp280;
extern File mySensorData;

// float getBarometerData(int dataSelec);

// const int B = 4275; // B value of the thermistor
// const int R0 = 100000;  // R0 = 100k
// float getTemp(int analogValue);

#endif
