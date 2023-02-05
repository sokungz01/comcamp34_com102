void setup() {
  pinMode(WIO_LIGHT,INPUT);
  Serial.begin(115200);
}

void loop() {
  int light = analogRead(WIO_LIGHT);
  Serial.print(" LIGHT VALUE : ");
  Serial.println(light);
}
