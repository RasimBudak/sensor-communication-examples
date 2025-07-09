#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(4, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);  // GPS modül genelde 9600 baud ile çalışır
  Serial.println("GPS veri okuma başlıyor...");
}

void loop() {
  while (gpsSerial.available()) {
    char c = gpsSerial.read();
    Serial.write(c);  // GPS'den gelen ham veriyi seri monitöre yazdır
  }
}
