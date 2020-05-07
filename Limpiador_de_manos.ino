void setup() { 
 Serial.begin(9600); 
 pinMode(rojo, OUTPUT); 
 pinMode(verde, OUTPUT); 
}

void loop() { 
 distancia = ultrasonic.Ranging(CM); 
 if(distancia<10){ digitalWrite(rojo, HIGH); 
 delay(15000);
 digitalWrite(rojo,LOW);
for (int i=0; i<=5;i++){ digitalWrite(rojo,HIGH);
 delay(1000); 
 digitalWrite(rojo,LOW); 
 delay(1000);
i = i + 1;}
digitalWrite(verde, HIGH);
 delay(5000); 
 digitalWrite(verde, LOW);
 }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
