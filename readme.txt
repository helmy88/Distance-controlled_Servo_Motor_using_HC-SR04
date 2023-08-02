Distance-controlled Servo Motor with Angle Display

Description:
This Arduino sketch demonstrates the control of a servo motor's angle based on the distance measured by an HC-SR04 ultrasonic sensor. As the distance changes, the servo motor's angle adjusts accordingly. The project showcases a dynamic relationship between distance and servo angle, with both measurements displayed in the Serial Monitor.

Components Needed:
- Arduino board (e.g., Arduino Uno)
- HC-SR04 ultrasonic sensor
- Servo motor
- Resistors and jumper wires

Circuit Setup:
1. Connect the HC-SR04's trigPin to digital pin 2, and the echoPin to digital pin 3.
2. Connect the servo motor to digital pin 9.
3. Configure resistors and connections as required.

Uploading the Sketch:
1. Open the Arduino IDE and create a new sketch.
2. Copy and paste the provided code into the sketch.
3. Connect the Arduino board to your computer via USB.
4. Select the correct board and port from the "Tools" menu in the IDE.
5. Click the "Upload" button to upload the code to the Arduino board.

Usage:
1. After uploading the code, the Arduino will monitor the distance using the HC-SR04 sensor.
2. Open the Serial Monitor in the Arduino IDE (Tools -> Serial Monitor) to view distance measurements and servo motor angles.

Behavior:
- The servo motor's angle is adjusted based on the distance measured by the sensor.
- The displayed angle corresponds to the servo motor's current position.

Customization:
- Adjust the distance thresholds (minDistance, maxDistance) and servo angle range (minAngle, maxAngle) to match your project requirements.
- Modify the code to include additional features or functionalities.

Acknowledgments:
This Arduino project benefits from the knowledge and creativity of the Arduino community. Feel free to expand and adapt this project to suit your learning and experimentation goals!


