# SimpleThermistor
A simple to use Arduino library for temperature measurement using NTC thermistors in a voltage divider with a fixed value resistor and an Arduino analog input.

````
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

````