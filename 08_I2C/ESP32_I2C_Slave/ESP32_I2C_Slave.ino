#include <Wire.h>

#define I2C_SLAVE_ADDR 0x08     // I2C address for the ESP32

String receivedMessage = "";

void setup() {
  Wire.begin(I2C_SLAVE_ADDR);   // Initialize ESP32 as I2C slave
  Wire.onReceive(receiveEvent); // Register callback for receiving data
  Wire.onRequest(requestEvent); // Register callback for sending data
  Serial.begin(115200);
  Serial.println("ESP32 I2C Slave Initialized");
}

void loop() {
  // Main loop does nothing; all I2C events are handled via interrupts
  delay(100);
}

// Callback function when data is received from the master
void receiveEvent(int numBytes) {
  receivedMessage = ""; // Clear previous message

  while (Wire.available()) {
    char c = Wire.read();
    if ((c >= '0' && c <= '9') ||
        (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c == '!')) {            
      receivedMessage += c;
    }
  }

  // Only print if the received message is not empty or garbage
  if (receivedMessage.length() > 0) {
    Serial.println("Received: " + receivedMessage);
  }
}


// Callback function when master requests data
void requestEvent() {
  String response = "Hello Raspberry pi!";
  Wire.write((const uint8_t*)response.c_str(), response.length());
  Serial.println("Sent: " + response);
}
