#define LED_PIN 13
#define BTN_PIN 2
 
void INT0_ISR(void)
{
  digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  
}
 
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(BTN_PIN), INT0_ISR, RISING);
}

void loop()
{
  if(digitalRead(LED_PIN)==0){
     
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    delay(400);
  }
}