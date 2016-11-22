int estado=0;
int cont=0;
int estadoanterior=0;
void setup()
{
  Serial.begin(9600);
  pinMode (2,INPUT);
  attachInterrupt(2,cuenta,RISING);
  pinMode(13,OUTPUT);
}
  void loop() {
   if (estado!=estadoanterior)
  {
  if(estado==1)
    Serial.println("LED ENCENDIDO");
  else
    Serial.println("LED APAGADO");
  estadoanterior=estado;
  }
}
void cuenta(){
  if (cont==10){
    estado=!estado;
    cont=0;
  }
  else
    cont++;
    digitalWrite(13,estado);
}
