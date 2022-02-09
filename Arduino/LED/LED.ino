#define LED_0 5
#define LED_1 4
#define LED_2 3
#define LED_3 2

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
}

void led_init()
{
    pinMode(LED_0, OUTPUT);
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);

    digitalWrite(LED_0, LOW);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
}

void led_test(uint8_t led_num)
{
    digitalWrite(led_num, LOW);
    delay(500);  
    digitalWrite(led_num, HIGH);
    delay(500); 
}
