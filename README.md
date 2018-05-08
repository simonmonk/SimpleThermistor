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

# Installation

1. From this page on GitHub: Clone or download -> Download ZIP

2. Then from Arduino IDE "Sketch"->"Include Library"->"Add Library from ZIP"

3. Navigate to the ZIP you downloaded.

4. File->Examples->SimpleThermistor->TempC

You'll need to find out the resistance of your Thermistor at 25C and its value of Beta.

I have'nt tested it on 3.3V Arduinos, but its should work fine, because the voltage divider scales to Vin.

Note 12 bit ADC assumed.
