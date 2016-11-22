 #define LED 13
  char letra;
  void setup ()
  {
    Serial.begin(9600);
    pinMode(LED,OUTPUT);
    
  }
  
  void loop ()
  {
    if(Serial.available()>0)
    {
      letra=Serial.read();
      if(letra=='a')
      {
        digitalWrite(LED,HIGH);
      }
      if(letra=='b')
      {
        digitalWrite(LED,LOW);
      }
    }
   
  }
