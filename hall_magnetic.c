/*
    Project name : Hall magnetic sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://github.com/Projectslearner/arduino-nano-hall-magnetic-sensor.git
*/

const int hallSensorPin = 2; // Digital pin connected to the Hall sensor

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  
  // Set the hallSensorPin as input
  pinMode(hallSensorPin, INPUT);

}

void loop() {
  // Read the value from the Hall sensor
  int sensorValue = digitalRead(hallSensorPin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Hall Sensor Value: ");
  Serial.println(sensorValue);
  
  // Add a small delay to avoid spamming the Serial Monitor
  delay(100);
}
