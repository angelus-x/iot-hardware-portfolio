const int photoresistor = A0;
const int ledGreen = 13;
const int ledRed = 8;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int lightLevel = analogRead(photoresistor);

  if (lightLevel < 800) {

    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);

    Serial.print("Sensor: ");
    Serial.print(lightLevel);
    Serial.println(" | RED LED ON");

  }

  else {

    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);

    Serial.print("Sensor: ");
    Serial.print(lightLevel);
    Serial.println(" | GREEN LED ON");
  }

  delay(100);
}
