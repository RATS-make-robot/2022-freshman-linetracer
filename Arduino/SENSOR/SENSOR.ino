#define SENSOR_0 A4
#define SENSOR_1 A5
#define SENSOR_2 A6
#define SENSOR_3 A7

uint16_t sensor_value[4] ={ 0, 0, 0, 0 };

void sensor_init();
void sensor_read(uint16_t* sensor_value);

void monitor_init();
void monitor_sensor(uint16_t* sensor_value);

void setup() 
{
  sensor_init();
  monitor_init();
}

void loop() 
{
  sensor_read(sensor_value);
  monitor_sensor(sensor_value);
}

void sensor_init()
{
    pinMode(SENSOR_0,INPUT);
    pinMode(SENSOR_1,INPUT);
    pinMode(SENSOR_2,INPUT);
    pinMode(SENSOR_3,INPUT);
}

void sensor_read(uint16_t* sensor_value)
{
    sensor_value[0] = analogRead(SENSOR_0);
    sensor_value[1] = analogRead(SENSOR_1);
    sensor_value[2] = analogRead(SENSOR_2);
    sensor_value[3] = analogRead(SENSOR_3);
}

void monitor_init()
{
    Serial.begin(9600); // sensor value monitor
}

void monitor_sensor(uint16_t* sensor_value)
{
    Serial.print(sensor_value[0]);
    Serial.print("\t");

    Serial.print(sensor_value[1]);
    Serial.print("\t");

    Serial.print(sensor_value[2]);
    Serial.print("\t");

    Serial.print(sensor_value[3]);
    Serial.println("\t");
}
