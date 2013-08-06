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
      
      }
      if (command == 0)
      {
      
      }
  }
  delay(10);
}

void scan()
{
  
  
}
