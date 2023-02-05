void setup() {
  pinMode(WIO_BUZZER,OUTPUT);
}

void loop() {
  digitalWrite(WIO_BUZZER,HIGH);
  delayMicroseconds(1000/2);
  digitalWrite(WIO_BUZZER,LOW);
  delayMicroseconds(1000/2);
}
