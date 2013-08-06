
#include <Servo.h> 

Servo servz;

int command = 0;


void setup()
{
  servz.attach(9);

  Serial.begin(9600);  

}

void loop()
{

  if( Serial.available() ) 
  {
      command = Serial.parseInt();
      if (command  == 1 )
      {
         scanUp(10,180,10);
         scanUp(50,90,100);
      }
      if (command == 0)
      { 
         servz.write(90);
      }
  }
  delay(10);

}

void scanUp(int theBegin, int theEnd, int slowness)
{
   for ( int i = theBegin ; i < theEnd; i++)
      {
        servz.write(i);
        delay(slowness);  
      } 
}

void scanDown(int theBegin, int theEnd, int slowness)
{
   for ( int i = theBegin ; i > theEnd; i--)
      {
        servz.write(i);
        delay(slowness);  
      } 
}
