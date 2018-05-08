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

#include "SimpleThermistor.h"
#include "Arduino.h"

SimpleThermistor::SimpleThermistor(int pin, float R25, float Beta, float R2)
{
  _pin = pin;
  _R25 = R25;
  _B = Beta;
  _R2 = R2;
}


float SimpleThermistor::getTempC()
{
  int reading = analogRead(_pin);
  float vout = reading * 5.0 / 1023.0; // actually works for 3.3V too as it cancels out
  float r = (_R2 * (5.0 - vout)) / vout;

  float inv_t = 1.0/t0 + (1.0/_B) * log(r/_R25);
  float t = (1.0 / inv_t) - t0k;
  return t;
}




float SimpleThermistor::getTempF()
{
  return (getTempC() * 9.0 / 5.0 + 32.0);
}
