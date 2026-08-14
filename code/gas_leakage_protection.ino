#include <Servo.h>

Servo gasServo;

// Pin Definitions
const int gasSensorPin = A0;   // MQ-2 Sensor Analog Pin
const int buzzerPin = 8;       // Buzzer Pin
const int fanPin = 7;          // MOSFET / Relay Control Pin for Exhaust Fan
const int servoPin = 9;        // MG995 Servo Signal Pin

// Gas Threshold Value
int gasThreshold = 400;

void setup() {

  Serial.begin(9600);

  pinMode(buzzerPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  digitalWrite(buzzerPin, LOW);
  digitalWrite(fanPin, LOW);

  // Attach Servo
  gasServo.attach(servoPin);

  // Initial Position (Gas Regulator ON Position)
  gasServo.write(0);

  Serial.println("LPG Gas Leakage Detection System Started");
}

void loop() {

  int gasValue = analogRead(gasSensorPin);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  // GAS DETECTED
  if (gasValue > gasThreshold) {

    Serial.println("Gas Leakage Detected!");

    // Buzzer ON
    digitalWrite(buzzerPin, HIGH);

    // Exhaust Fan ON
    digitalWrite(fanPin, HIGH);

    // Close Gas Regulator using MG995 Servo
    gasServo.write(90);

    delay(1000);
  }

  // NORMAL CONDITION
  else {

    Serial.println("System Normal");

    // Buzzer OFF
    digitalWrite(buzzerPin, LOW);

    // Fan OFF
    digitalWrite(fanPin, LOW);

    // Regulator Open Position
    gasServo.write(0);
  }

  delay(500);
}
