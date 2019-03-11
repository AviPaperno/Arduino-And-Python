char inChar;
#define LED_PIN SS

void setup() {
  pinMode(LED_PIN, OUTPUT); // Инициализация светодиода
  Serial.begin(115200); // Инициализация Serial - порта
}

void loop() {
  if (Serial.available() > 0)
  {
    inChar = Serial.read();
    if (inChar=='e') // e - Enable - включить
    {
      digitalWrite(LED_PIN,HIGH);
    }
  }
  
    else if (inChar=='d') // d - Disable - выключить
    {
      digitalWrite(LED_PIN,LOW);
    }
  
    else if (inChar=='b')  // b - Blink - выключить режим мигания
    {
      while (true){
      digitalWrite(LED_PIN,HIGH);
      delay(1000);
      digitalWrite(LED_PIN,LOW);
      delay(1000);
    }
    }
}
