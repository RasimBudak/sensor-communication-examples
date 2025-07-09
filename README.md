# sensor-communication-examples
“UART, SPI ve I2C protokolleri ile sensör haberleşme örnekleri”
# I2C Sensör Okuma - MPU6050

Bu örnek, Arduino ile MPU6050 IMU sensörünü I2C protokolü üzerinden okumayı göstermektedir.

## Gereksinimler
- Arduino UNO veya uyumlu kart
- MPU6050 sensör modülü
- Arduino Wire kütüphanesi (Arduino IDE ile birlikte gelir)

## Bağlantılar
| MPU6050 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| SDA         | A4          |
| SCL         | A5          |

## Kullanım
1. `i2c_sensor_read.ino` dosyasını Arduino IDE'de açın.  
2. Arduino'nuza yükleyin.  
3. Seri monitörde sensör verilerini görüntüleyin.
