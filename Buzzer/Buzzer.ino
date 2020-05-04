//Example Code for KY-006
//Steps2Make.com 

int buzzer = 8 ;// buzzer signal connected to this pin
void setup ()
{
  pinMode (buzzer, OUTPUT) ;// set the digital IO pin mode, OUTPUT out of Wen
}

void loop ()
{
  unsigned char i, j ;// define variables
  while (1)
  {
    for (i = 0; i <5; i++) // Wen a frequency sound
    {
      digitalWrite (buzzer, HIGH) ;// send voice
      delay (200) ;// Delay 1ms
      digitalWrite (buzzer, LOW) ;// do not send voice
      delay (300) ;// delay ms
    }
 //   for (j = 0; j <10; j++) // Another frequency sound
    {
      digitalWrite (buzzer, HIGH) ;// send voice
      delay (20) ;// delay 2ms
      digitalWrite (buzzer, LOW) ;// do not send voice
      delay (10) ;// delay 2ms
    }
  }
}

