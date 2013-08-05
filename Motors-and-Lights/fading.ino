void setup()
{
 pinMode(9,OUTPUT); //This allows 13 to move a lot of electricity (a lot of amps)
}


void loop()
{

  for(int i = 255; i >= 0 ; i-- )
    {
      analogWrite(9,i); //always on
      delay(10);
    }  

}
