#define LED_0 6
#define LED_1 5
#define LED_2 4
#define LED_3 3
#define LED_4 2

void setup() {
  pinMode(LED_0, OUTPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  
  digitalWrite(LED_0, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
}

void loop() {
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_0, HIGH);
  delay(500);
  digitalWrite(LED_0, LOW);
  digitalWrite(LED_1, HIGH);
  delay(500);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  delay(500);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  delay(500);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(500);
}
