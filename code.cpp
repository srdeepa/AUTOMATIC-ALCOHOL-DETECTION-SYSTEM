#define sensorDigital A0  
#define Motor 43 
#define buzzer 42 
#define sensorAnalog A1
void setup()
{  
    pinMode(sensorDigital,INPUT); 
    pinMode(Motor,OUTPUT); 
    pinMode(buzzer,OUTPUT);  
    Serial.begin(9600); 
}
void loop()
{  
   bool digital=digitalRead(sensorDigital);  
   int analog=analogRead(sensorAnalog);  
   Serial.print("Analog value:");  
   Serial.print(analog);  
   Serial.print("t");  
   Serial.print("Digital value");  
  Serial.println(digital); 
  if (digital==0)
  {  
       digitalWrite(Motor,LOW);  
       digitalWrite(buzzer,HIGH);  
  }  else{  
       digitalWrite(Motor,HIGH);  
        digitalWrite(buzzer,LOW);  
  }  
} 
