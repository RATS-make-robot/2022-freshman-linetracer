#define ENA 7
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
#define ENB 12

void motor_init();
void motor_go(uint8_t speed1, uint8_t speed2);

void setup() 
{
  motor_init();
}

void loop() 
{
  motor_go(200, 200);
}

void motor_init()
{
    pinMode(ENA, OUTPUT); 
    pinMode(ENB, OUTPUT); 

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
}

void motor_go(uint8_t speed1, uint8_t speed2)
{
    // speed
    analogWrite(ENA, speed1);
    analogWrite(ENB, speed2);
  
    // direction
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}
