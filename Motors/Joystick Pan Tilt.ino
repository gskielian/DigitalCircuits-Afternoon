#include <Servo.h>

Servo Pan;
Servo Tilt;

int panPos;
int tiltPos;

void setup()
{
 Serial.begin(9600);
 
 Pan.attach(9);
 Tilt.attach(10);
}

void loop()
{
  panPos = analogRead(A0);
  Pan.write(panPos);
  Serial.println(panPos);
  
  tiltPos = analogRead(A1);
  Tilt.write(tiltPos);
  Serial.println(tiltPos);
  
  delay(10);
}
