// Conveyor Control System – Arduino Uno R4 Wi-Fi
// Author: Ashley Ortiz | CPEG/MANE 462 Senior Design | Spring 2026

#define SSR_PIN 7

#define TRIG1 9
#define ECHO1 10

#define TRIG2 11
#define ECHO2 12

const int stopDistance = 15; // cm
const int stopTime1 = 3000;  // 3 seconds for Sensor 1

bool sensor1AlreadyStopped = false;

void setup() {
  pinMode(SSR_PIN, OUTPUT);

  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1, INPUT);

  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2, INPUT);

  Serial.begin(9600);

  digitalWrite(SSR_PIN, HIGH); // conveyor running
}

void loop() {
  int d1 = getDistance(TRIG1, ECHO1);
  int d2 = getDistance(TRIG2, ECHO2);

  Serial.print("S1: ");
  Serial.print(d1);
  Serial.print(" cm   S2: ");
  Serial.print(d2);
  Serial.println(" cm");

  // SENSOR 1: stop conveyor for 3 seconds
  if ((d1 > 0 && d1 <= stopDistance) && !sensor1AlreadyStopped) {
    digitalWrite(SSR_PIN, LOW);
    delay(stopTime1);
    digitalWrite(SSR_PIN, HIGH);

    sensor1AlreadyStopped = true;
  }

  // SENSOR 2: hold stop while object is present
  else if (d2 > 0 && d2 <= stopDistance) {
    digitalWrite(SSR_PIN, LOW);
  }

  // Otherwise conveyor runs
  else {
    digitalWrite(SSR_PIN, HIGH);
  }

  // Reset Sensor 1 when clear
  if (d1 > stopDistance || d1 == -1) {
    sensor1AlreadyStopped = false;
  }

  delay(100);
}

int getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) return -1;

  return duration * 0.034 / 2;
}