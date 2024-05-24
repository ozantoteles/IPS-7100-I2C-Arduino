# IPS-7100 Arduino Library

A comprehensive Arduino library for interfacing with the IPS-7100 Intelligent Particle Sensor over I2C communication. This repository is a fork of the [original library](https://github.com/PieraSystems/7100-I2C-example) from [Piera Systems](https://github.com/PieraSystems), modified for seamless integration with the Arduino IDE instead of Platform.io.

## Installation
1. Download the library .ZIP file from the [GitHub repository](https://github.com/ozantoteles/IPS-7100-I2C-Arduino).
2. Open Arduino IDE.
3. Navigate to Sketch > Include Library > Add .ZIP Library....
4. Select the downloaded .ZIP file and click "Open".
5. The library will be imported and available for use in your sketches under Sketch > Include Library > IPS-7100-I2C-Arduino.

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

Make sure to consult your Arduino board's pinout diagram and the [IPS-7100 datasheet](https://pierasystems.com/wp-content/uploads/2024/02/IPS-Datasheet-V1.3.8.pdf) for accurate wiring and setup.
