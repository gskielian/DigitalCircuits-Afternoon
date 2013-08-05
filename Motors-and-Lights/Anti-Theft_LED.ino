void setup()
{
 pinMode(13,OUTPUT); //This allows 13 to move a lot of electricity (a lot of amps)
}


void loop()
{
 digitalWrite(13,HIGH);
 delay(100); //This keeps your arduino from bricking
 digitalWrite(13,LOW);
 delay(2000);
}
