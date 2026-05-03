#include <Wire.h>
#include <MPU6050.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);

MPU6050 mpu;

int16_t ax, ay, az;

void setup() {
  mySerial.begin(9600);
  Wire.begin();
  mpu.initialize();
}

void loop() {
  mpu.getAcceleration(&ax, &ay, &az);

  if (ay > 12000) {
    mySerial.println("F");
  }

  else if (ay < -12000) {
    mySerial.println("B");
  }

  else if (ax > 12000) {
    mySerial.println("R");
  }

  else if (ax < -12000) {
    mySerial.println("L");
  }

  else {
    mySerial.println("S");
  }

  delay(200);
}
