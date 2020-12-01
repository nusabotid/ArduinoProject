#include <dht11.h>
#include <TM1637Display.h>

dht11 DHT11;
const int DHT11PIN = 1;
const int CLK = 2;
const int DIO = 3;
TM1637Display display(CLK, DIO); 

void setup()
{
  display.setBrightness(3);
}


void loop()
{
  int chk = DHT11.read(DHT11PIN);
  display.showNumberDec(DHT11.temperature);
}
