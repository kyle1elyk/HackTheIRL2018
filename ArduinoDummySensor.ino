#include <dht.h>     //Library from http://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/
#include <Wire.h>
#include <RTClib.h>  //Library from https://github.com/adafruit/RTClib
dht DHT;

RTC_DS1307 rtc;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
   if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  if (! rtc.isrunning()) {
    Serial.println("RTC is NOT running!");
    // following line sets the RTC to the date & time this sketch was compiled
    // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set
    // January 21, 2014 at 3am you would call:
    // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
  }
}

void loop()
{
  DateTime now = rtc.now();
  
  int chk = DHT.read11(DHT11_PIN);


  //Format: "{'TIME':'YYYY/MM/DD HH:MM:SS', 'HUM':DHT_HUM.00, 'TEMP':DHT_TEMP.00}"
  
  Serial.print("{'TIME':'");
  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.print("', 'HUM':");
  Serial.print(DHT.humidity);
  Serial.print(", 'TEMP':");
  Serial.print(DHT.temperature);
  Serial.println("}");
  delay(2000);
}
