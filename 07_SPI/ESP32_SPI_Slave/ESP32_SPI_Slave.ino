#include <SPI.h>

#define MISO_PIN 19
#define MOSI_PIN 23
#define SCLK_PIN 18
#define CS_PIN 5

byte receivedData = 0;
byte responseData = 0xFF;  // Fixed response data (e.g., 0xFF)

void setup() {
  Serial.begin(115200);
  pinMode(MISO_PIN, INPUT);  // MISO should be input
  pinMode(CS_PIN, INPUT);    // CS should be input in slave mode
  
  // Initialize SPI as a slave
  SPI.begin(SCLK_PIN, MISO_PIN, MOSI_PIN);
  SPI.setFrequency(50000);
  SPI.setDataMode(SPI_MODE0);  // SPI mode 0 (CPOL = 0, CPHA = 0)
  Serial.println("ESP32 SPI Slave ready");
}

void loop() {
  // Wait for CS pin to go LOW (indicating a transaction has started)
  if (digitalRead(CS_PIN) == LOW) {
    receivedData = SPI.transfer(responseData); // Transfer data to master
    Serial.print("Received data: 0x");
    Serial.println(receivedData, HEX);
    delay(10);  // Small delay for stability
  }
}
