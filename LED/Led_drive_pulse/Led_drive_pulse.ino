#include <MCP492X.h>  // Include the library

#define PIN_SPI_CHIP_SELECT_DAC 10  // Or any pin you'd like to use

MCP492X myDac(PIN_SPI_CHIP_SELECT_DAC);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  myDac.begin();
}

void loop() {
  myDac.analogWrite(3500);
  delay(200);
  
for (int value = 2300; value > 1900; value=value-2) {
    myDac.analogWrite(value);
    delay(20);
    Serial.println(value);
}
for (int value = 1900; value <= 2300; value=value+2) {
    myDac.analogWrite(value);
    delay(20);
    Serial.println(value);
}

}