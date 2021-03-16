void setup() {
 
  Serial.begin(9600);
  delay(1000);
  Serial.println("ESP touch test");
  pinMode(2,OUTPUT);

}

void loop() {

  Serial.println(touchRead(4));
  if(touchRead(4)<20)
  digitalWrite(2,HIGH);
  else 
  digitalWrite(2,LOW);
  delay(100);

}
