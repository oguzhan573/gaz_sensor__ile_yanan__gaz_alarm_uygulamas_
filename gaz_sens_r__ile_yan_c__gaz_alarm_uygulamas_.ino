int esikdeger=400;
int buzzer=9;
int deger=0;
int yesil=3;
int kirmizi=2;

void setup()
{
 pinMode(buzzer,OUTPUT);
 pinMode(yesil,OUTPUT);
 pinMode(kirmizi,OUTPUT);
 Serial.begin(9600);

}void loop()
{ 
  deger=analogRead(A0);
  Serial.begin(deger);
  if(deger>esikdeger)
  {
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  else {
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
  digitalWrite(buzzer, LOW);
  }

}