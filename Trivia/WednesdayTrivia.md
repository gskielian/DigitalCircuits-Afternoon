Wednesday Trivia
================

Welcome to Trivia!


Rules of trivia, I determine all the points, I determine the questions, and only when I write the ? do you raise your hand.


The first to raise your hand will get to answer the question!

Use this code for a button

```arduino
void setup()
{
pinMode(13, OUTPUT);
pinMode(5, INPUT);
}

void loop()
{
  if ( digitalRead(5) == LOW)
    {
       digitalWrite(13, HIGH);
    }
    else
    {
       digitalWrite(13,LOW);
    }
    
    delay(10);
}

```



## Trivia

1. Question 1: What does a resistor do to electric current?
  ans: it slows it down  + 2 for Rohit
2. Question 2: When electricity goes through a resistor, what builds up?
  ans: Voltage     +2  for 50N4K
3. Question 3: How do you measure resistance with a Multimeter?
  ans: black and red probes on opposite sides of the resistor  + 2 50N4K
4. Question 4: What is the name of the device in our joysticks?
  ans: potentiomter  + 5 Z3b4
5. Question 5: What does turning the knob on the potentiometer do -- what characteristic of electricity does it control?
  ans: voltage
6. If a bigger resistor has same amount of current through it, it builds up more voltage.  +2 50N4K
7. True or False: the following code is okay:
```arduino
if ( digitalRead(5) == HIGH );
  {
    Serial.println("Clicked");
  }
```
ans:the semicolon breaks the code
8. What is the name of the circuit with the photoresistor and the resistor?
  ans: voltage divider +5 9r39







