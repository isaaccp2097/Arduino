#include <TimerOne.h>
int signal=0;

void setup ()
{
  Timer1.initialize(500000);
  Timer1.attachInterrupt(sreloj);
  pinMode(4,OUTPUT);
}
void loop()
{
}

void sreloj()
{
  if (signal==0)
    digitalWrite(4,LOW);
  else
    digitalWrite(4,HIGH);
  signal=!signal;
}
    
