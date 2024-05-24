# IPS-7100 Arduino Library

## Parts required
* [Piera Systems IPS-7100](https://www.pierasystems.com/products/)
* Arduino compatible device (e.g., [ESP32 devkit](https://www.digikey.com/en/products/detail/espressif-systems/ESP32-DEVKITC-32E/12091810))


## Instructions
1. Connect the IPS-7100 to your Arduino compatible device using the I2C pins.
   1. VDD: Connect to 5V power source.
   2. SDA: Connect to the SDA (data) pin on your Arduino.
   3. SCL: Connect to the SCL (clock) pin on your Arduino.
   4. SEL: Connect to GND to set I2C as the communication protocol.
   5. GND: Connect to the ground (GND) pin on your Arduino.
2. Modify the I2C bus initialization if necessary using 'Wire.begin(SDA,SCL)' with the appropriate pins.
3. Include the IPS-7100 library in your Arduino sketch.
4. Use the library functions to interact with the IPS-7100 sensor.
5. Upload the sketch to your Arduino compatible device.
6. Open the serial monitor to view the sensor data.

Make sure to consult your Arduino board's pinout diagram and the IPS-7100 datasheet for accurate wiring and setup.
