#include <dht.h>
// http://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/
dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  double chk = DHT.read11(DHT11_PIN);
  Serial.print("{'HUM':");
  Serial.print(DHT.humidity);
  Serial.print(", 'TEMP':");
  Serial.print(DHT.temperature);
  Serial.println("}");
  delay(2000);
}
