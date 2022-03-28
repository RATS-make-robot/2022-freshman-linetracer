#define ENA 7
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
#define ENB 12

void setup() {
  pinMode(ENA, OUTPUT); 
  pinMode(ENB, OUTPUT); 

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // speed
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  // direction
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1000);

  // speed
  analogWrite(ENA, 0);
  analogWrite(ENB, 255);

  // direction
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1000);

  // speed
  analogWrite(ENA, 255);
  analogWrite(ENB, 0);

  // direction
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1000);

  // speed
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  // direction
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(1000);
}