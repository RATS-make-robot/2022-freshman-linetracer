#define SENSOR_0 A0
#define SENSOR_1 A1
#define SENSOR_2 A2
#define SENSOR_3 A3
#define SENSOR_4 A4

int sensor_value0 = 0;
int sensor_value1 = 0;
int sensor_value2 = 0;
int sensor_value3 = 0;
int sensor_value4 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor_value0 = analogRead(SENSOR_0);
  sensor_value1 = analogRead(SENSOR_1);
  sensor_value2 = analogRead(SENSOR_2);
  sensor_value3 = analogRead(SENSOR_3);
  sensor_value4 = analogRead(SENSOR_4);

  Serial.print(sensor_value0);
  Serial.print("\t");
  Serial.print(sensor_value1);
  Serial.print("\t");
  Serial.print(sensor_value2);
  Serial.print("\t");
  Serial.print(sensor_value3);
  Serial.println("\t");
  Serial.print(sensor_value4);
  Serial.println("\t");
}