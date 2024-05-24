#include <Arduino.h>
#include <Wire.h>
#include "IpsI2C.h"

// Create an instance of IpsSensor
IpsSensor ips_sensor;

void setup() {
  Serial.begin(115200);
  
  // Initialize the IPS sensor with the Wire object
  Wire.begin(27, 26); // Initialize Wire with custom pins
  ips_sensor.begin(Wire);

  Serial.println("IPS-7100 Test");
}

void loop() {
  // Update the IPS sensor values
  ips_sensor.update();

  // Read and print PM values
  Serial.print("PM 1.0: ");
  Serial.println(ips_sensor.getPM01());
  Serial.print("PM 2.5: ");
  Serial.println(ips_sensor.getPM25());
  Serial.print("PM 10: ");
  Serial.println(ips_sensor.getPM100());
  Serial.println();

  // Wait for 1 second before reading again
  delay(1000);
}
