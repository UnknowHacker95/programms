#include <Servo.h>
Servo servo_0;

void setup()
{
  Serial.begin(9600);
  servo_0.attach(6);
  pinMode(3, OUTPUT);
}

void loop()
{
  int val = analogRead(A0);
   if (val < 300) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
  }
}