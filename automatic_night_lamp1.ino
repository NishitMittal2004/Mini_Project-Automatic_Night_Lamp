void setup()
{
 Serial.begin(9600);
 pinMode(13,OUTPUT) ;
}

void loop()
{
  int c = analogRead(A0) ;
  Serial.println(c) ;
  if(c<800)
  {
    digitalWrite(13,LOW) ; 
  }
  else
  {
    digitalWrite(13,HIGH) ; 
  }
}