# sensor-communication-examples
“UART, SPI ve I2C protokolleri ile sensör haberleşme örnekleri”

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

# UART Sensör Okuma - GPS Modülü (NEO-6M)

Bu örnek, Arduino ve GPS modülü NEO-6M arasında UART üzerinden haberleşmeyi göstermektedir.

## Gereksinimler
- Arduino UNO veya uyumlu kart
- NEO-6M GPS modülü
- SoftwareSerial kütüphanesi (Arduino IDE ile birlikte gelir)

## Bağlantılar
| GPS Pin | Arduino Pin  |
|---------|--------------|
| VCC     | 5V           |
| GND     | GND          |
| TX      | 4 (RX)       |
| RX      | 3 (TX)       |

## Kullanım
1. `uart_gps_read.ino` dosyasını Arduino IDE'de açın.  
2. Arduino'nuza yükleyin.  
3. Seri monitörde GPS modülünden gelen NMEA verilerini göreceksiniz.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

# SPI Sensör Okuma - MCP3008 ADC

Bu örnek, Arduino ve MCP3008 ADC modülü arasında SPI protokolü ile analog veri okuma işlemini göstermektedir.

## Gereksinimler
- Arduino UNO veya uyumlu kart
- MCP3008 ADC modülü
- SPI kütüphanesi (Arduino IDE ile birlikte gelir)

## Bağlantılar
| MCP3008 Pin | Arduino Pin |
|-------------|-------------|
| VDD         | 5V          |
| VREF        | 5V          |
| AGND        | GND         |
| DGND        | GND         |
| CLK         | 13          |
| DOUT        | 12 (MISO)   |
| DIN         | 11 (MOSI)   |
| CS/SHDN     | 10          |

## Kullanım
1. `spi_mcp3008_read.ino` dosyasını Arduino IDE'de açın.  
2. Arduino'nuza yükleyin.  
3. Seri monitörde ADC kanal 0’dan gelen analog değeri göreceksiniz.

