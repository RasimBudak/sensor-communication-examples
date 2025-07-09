#include <SPI.h>

const int csPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(csPin, OUTPUT);
  SPI.begin();
}

int readADC(int channel) {
  if (channel < 0 || channel > 7) return -1;

  digitalWrite(csPin, LOW);

  // Başlatma komutları
  byte startBit = 0x01;
  byte singleEnded = 0x08;
  byte command = singleEnded | channel;

  SPI.transfer(startBit);
  byte highByte = SPI.transfer(command << 4);
  byte lowByte = SPI.transfer(0x00);

  digitalWrite(csPin, HIGH);

  int result = ((highByte & 0x03) << 8) | lowByte;
  return result;
}

void loop() {
  int adcValue = readADC(0);  // Kanal 0'ı oku
  Serial.print("ADC Kanal 0 Değeri: ");
  Serial.println(adcValue);
  delay(500);
}
