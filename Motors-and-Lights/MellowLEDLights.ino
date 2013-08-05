void setup()
{
 pinMode(9,OUTPUT); //This allows 13 to move a lot of electricity (a lot of amps)
}


void loop()
{
fadeOut(1);
fadeIn(10);
}

void fadeOut(int x)
{
    for(int i = 255; i >= 0 ; i-- )
    {
      analogWrite(9,i); //always on
      delay(x);
    }   
}

void fadeIn(int x)
{
   for(int i = 0; i <= 255 ; i++ )
    {
      analogWrite(9,i); //always on
      delay(x);
    }  
}
