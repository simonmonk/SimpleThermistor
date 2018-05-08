#include <SimpleThermistor.h>


//                                         pin, R25,   B,    R2
SimpleThermistor sensor = SimpleThermistor(A0, 1000.0, 3800, 1000.0);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(sensor.getTempC());
    delay(1000);
}