
int time;
int pulse = 1000;
int pin = 3;

void setup(){
  pinMode(pin,OUTPUT);
  
  for(time = 0; time < 500; time++){
    digitalWrite(pin,HIGH);
    delayMicroseconds(1100);
    digitalWrite(pin,LOW);
    delay(20-(pulse/1000));
  }
  
}

void loop(){
  
 pulse = 1350; 
 
    digitalWrite(pin,HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pin,LOW);
    delayMicroseconds(18900);
 
  
  
/*  for(int pulse = 1150; pulse <= 1400; pulse ++){
    digitalWrite(pin,HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pin,LOW);
    delay(20-(pulse/1000));
  } */
  
}
    
