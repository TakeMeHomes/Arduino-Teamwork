#define SENSOR_PIN A0

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(SENSOR_PIN);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  delay(1000);
}