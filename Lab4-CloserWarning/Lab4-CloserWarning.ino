
void setup(void) {
    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    pinMode(D3,OUTPUT);
    pinMode(WIO_LIGHT,INPUT);
    pinMode(WIO_BUZZER,OUTPUT);
    Serial.begin(115200);
}

void loop() {
    int light = analogRead(WIO_LIGHT);
    Serial.println(light);
    if(light < 100)
    { 
      digitalWrite(D1,LOW);
      digitalWrite(D2,LOW);
      digitalWrite(D3,LOW);
      analogWrite(WIO_BUZZER,100);
      delay(100);
      analogWrite(WIO_BUZZER,0);
      delay(50);
      digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);
      digitalWrite(D3,HIGH);
      delay(50);
    }else{
      digitalWrite(D1,LOW);
      delay(500);
      digitalWrite(D1,HIGH);
      digitalWrite(D2,LOW);
      delay(500);
      digitalWrite(D2,HIGH);
      digitalWrite(D3,LOW);
      delay(500);
      digitalWrite(D3,HIGH);
    }
}
   