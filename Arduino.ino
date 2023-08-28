#include <Servo.h>

const int plrSensor1Pin = 2;
const int plrSensor2Pin = 3;
const int servoPin = 9
const int relayPin = 10

Servo myservo;

bool sensor1Activated = false;
bool sensor2Activated = false;


void setup() {
  pinMode(plrSensor1Pin, INPUT)
  pinMode(plrSensor2Pin, INPUT)
  pinMode(relayPin, OUTPUT)
  
  myservo.attach(servoPin)
  myservo.write(0)
  digitalWrite(relayPin, LOW)
  Serial.begin(9600)
}

void loop() {
  if (digitalRead(plrSensor1Pin) == HIGH && !sensor1Activated) {
    myservo.write(90)
    delay(500)
    myservo.write(0)
    delay(2000)
    sensor1Activated = true;
  } else if (digitalRead(plrSensor1Pin) == LOW) {
    sensor1Activated = false;
}
if (digitalRead(plrSensor2Pin) == HIGH && !sensor2Activated) {
  digitalWrite(relayPin, HIGH)
  delay(30000)
}
