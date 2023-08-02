#include <Servo.h>

// HC-SR04 pins
const int trigPin = 2;
const int echoPin = 3;

// Servo motor pin
const int servoPin = 9;

// Constants for distance thresholds and servo angles
const int minDistance = 5;   // Minimum distance threshold (cm)
const int maxDistance = 30;  // Maximum distance threshold (cm)
const int minAngle = 0;      // Minimum servo angle
const int maxAngle = 180;    // Maximum servo angle

// Create a servo object
Servo myservo;

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);
  
  // Initialize servo
  myservo.attach(servoPin);
  
  Serial.println("Distance-controlled Servo Motor");
  Serial.println("Distance\tAngle");
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Calculate the duration of the pulse
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance based on the duration
  float distance_cm = duration * 0.0343 / 2.0;
  
  // Print distance and angle to Serial Monitor
  Serial.print(distance_cm);
  Serial.print(" cm\t\t");
  
  // Map the distance to a servo angle
  int angle = map(distance_cm, minDistance, maxDistance, minAngle, maxAngle);
  
  // Limit the angle within the servo's range
  angle = constrain(angle, minAngle, maxAngle);
  
  // Set the servo angle
  myservo.write(angle);
  
  // Print the angle to Serial Monitor
  Serial.println(angle);
  
  delay(500); // Delay for stability
}
