/***************************************************************************
  This is a library for the BME280 humidity, temperature & pressure sensor

  Designed specifically to work with the Adafruit BME280 Breakout
  ----> http://www.adafruit.com/products/2650

  These sensors use I2C or SPI to communicate, 2 or 4 pins are required
  to interface. The device's I2C address is either 0x76 or 0x77.

  Adafruit invests time and resources providing this open source code,
  please support Adafruit andopen-source hardware by purchasing products
  from Adafruit!

  Written by Limor Fried & Kevin Townsend for Adafruit Industries.
  BSD license, all text above must be included in any redistribution
 ***************************************************************************/

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define BME_SCK 13
#define BME_MISO 12
#define BME_MOSI 11
#define BME_CS 10

#define SEALEVELPRESSURE_HPA (1013.25)

int powerPin = 9;

Adafruit_BME280 bme; // I2C
//Adafruit_BME280 bme(BME_CS); // hardware SPI
//Adafruit_BME280 bme(BME_CS, BME_MOSI, BME_MISO, BME_SCK); // software SPI

unsigned long delayTime;

void setup() {
    Serial.begin(9600);
    Serial.println(F("BME280 test"));

    bool status;
    
    // default settings: Starts the sensor and the sensing of the area, I'm guessing?

    status = bme.begin();  
    if (!status) {
        Serial.println("Could not find a valid BME280 sensor, check wiring!");
        while (1);
    }
    
    Serial.println("-- Default Test --");
    delayTime = 1000; // It will start printing data after a pause.

    Serial.println();
}


void loop() {  // plays over and over
    printValues(); // command to print values
    delay(delayTime);
  
  int Temperature; 
   if (bme.readTemperature () >= 25) { // when the sensor reads temp > or = 25, it will issue the command...
    digitalWrite(powerPin, HIGH); // ... to turn on the LED light! It's connected to the 9th pin, a variable declared earlier
    }
    else { // if the sensor is not reading a temp >= 25, then the LED will turn off...
    digitalWrite(powerPin, LOW); // ... command to turn off the LED light.
    }
}

void printValues() { // This is to get the Arduino to print the temperature values to the Serial Monitor so I can track the temperature
    Serial.print("Temperature = ");
    Serial.print(bme.readTemperature());
    Serial.println(" *C");

    Serial.println();
}
