#define LED_0 6
#define LED_1 5
#define LED_2 4
#define LED_3 3
#define LED_4 2

void led_init();
void led_test(uint8_t led_num);

void setup() {
  // put your setup code here, to run once:
  led_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  led_test(LED_0);
  led_test(LED_1);
  led_test(LED_2);
  led_test(LED_3);
  led_test(LED_4);
}

void led_init()
{
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

void led_test(uint8_t led_num)
{
    digitalWrite(led_num, LOW);
    delay(500);  
    digitalWrite(led_num, HIGH);
    delay(500); 
}
