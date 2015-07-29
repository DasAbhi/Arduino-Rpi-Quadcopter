
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
  
 //the upper throttle is 2442, however it can be pushed to 2443, but its not very reliable as i noticed the motors stuttering at this number.
 //lower throttle is 1168
  
  
  pulse = 2442; 
 
    digitalWrite(pin,HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pin,LOW);
    delayMicroseconds(20000-pulse);
 
  
  
/*  for(int pulse = 1150; pulse <= 1400; pulse ++){
    digitalWrite(pin,HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pin,LOW);
    delay(20-(pulse/1000));
  } */
  
}
    
