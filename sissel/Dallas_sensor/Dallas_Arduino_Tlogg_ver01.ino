#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
　
//vi har koblet DS18b20 til pinne D2 pÃ¥ arduinoen
　
#define DS18B20 2
　
OneWire ourWire(DS18B20);
DallasTemperature sensors(&ourWire);
unsigned long time1;
unsigned long time2;
　
void setup()
{
  Serial.begin(9600);
  delay(1000);
  sensors.begin();
  
  
}
　
void loop()
{
  time1=millis();
  sensors.requestTemperatures();
  Serial.print(sensors.getTempCByIndex(0));
  Serial.print("  ");
  time2 = millis()-time1;
  Serial.println(time2);
}
　
