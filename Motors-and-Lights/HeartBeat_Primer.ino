void setup()
{
 pinMode(9,OUTPUT); //This allows 13 to move a lot of electricity (a lot of amps)
}


void loop()
{
  analogWrite(9,255); //always on
  delay(1000);
  analogWrite(9,128); // on half the time
  delay(1000);
  analogWrite(9,64);
  delay(1000);
  analogWrite(9,32);
  delay(1000);
  analogWrite(9,16);
  delay(1000);
}
