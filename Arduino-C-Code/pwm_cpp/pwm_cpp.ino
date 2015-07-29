void main (){
  int pin = 3;
  int delays = 1100;
  
  
for(int i = 0; i < 500; i ++){
  digitalWrite(pin,HIGH);
  delayMicroseconds(delays);
  digitalWrite(pin,HIGH);
  delayMicroseconds(delays);  
}


}






void loop(){
}
