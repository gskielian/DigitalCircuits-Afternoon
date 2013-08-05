void setup()
{
 pinMode(13,OUTPUT); //This allows 13 to move a lot of electricity (a lot of amps)
}


void loop()
{
  digitalWrite(13,HIGH); //This raises pin 13 to 5V
 delay(10); //This keeps your arduino from bricking
}
