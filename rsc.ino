#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);

void setup() {

   mySerial.begin(9600);

   pinMode(10,OUTPUT);

   pinMode(9,OUTPUT);

   pinMode(6,OUTPUT);

   pinMode(5,OUTPUT);
}

void loop() {

  if (mySerial.available())

  {
    char data = mySerial.read();

    if(data=='F')
    {
      digitalWrite(10,1);

      digitalWrite(9,0);

      digitalWrite(6,1);

      digitalWrite(5,0);
    }

    else if(data=='B')
    {
      digitalWrite(10,0);

      digitalWrite(9,1);

      digitalWrite(6,0);

      digitalWrite(5,1);
    }

    else if(data=='R')
    {
      digitalWrite(10,1);

      digitalWrite(9,0);

      digitalWrite(6,0);

      digitalWrite(5,0);
    }

    else if(data=='L')
    {
      digitalWrite(10,0);

      digitalWrite(9,0);

      digitalWrite(6,1);

      digitalWrite(5,0);
    }

    else if(data=='S')
    {
      digitalWrite(10,0);

      digitalWrite(9,0);

      digitalWrite(6,0);

      digitalWrite(5,0);
    }
  }
}
