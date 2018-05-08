/*
A simple to use Arduino library for temperature measurement using NTC thermistors in a voltage 
divider with a fixed value resistor and an Arduino analog input.

5V -----
        >
       <   NTC Thermistor R1
        >  (R25 - Resistance at 25 degrees C)
       <   (B - Beta coefficient - see the Thermistors datasheet)
A0 -----
        >
       <
        > Fixed resistor R2
       <
GND ----

Simon Monk 2018
*/

#ifndef SimpleThermistor_h
#define SimpleThermistor_h

class SimpleThermistor
{
private:
    int _pin;
	  float _R25;
    float _B;
    float _R2;
    const float t0k = 273.15;
    const float t0 = t0k + 25;

public:
  SimpleThermistor(int pin, float R25, float B, float R2);
  float getTempC();
  float getTempF();

};


#endif
