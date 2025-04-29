// Pin configuration
const int ledPin = 9;       // LED connected to D9
const int sensePin = A0;    // Voltage sensing pin connected to A0

void setup() {
  pinMode(ledPin, OUTPUT);  // D9 output
  Serial.begin(9600);       // Start serial communication (optional for monitoring)
}

void loop() {
  int sensorValue = analogRead(sensePin);          // Read analog voltage from A0
  float voltage = sensorValue * (5.0 / 1023.0);    // Convert ADC value to voltage

  Serial.println(voltage);   // Print voltage value to Serial Monitor (optional)

  if (voltage > 1.0) {
    // If voltage is detected (current is present)
    digitalWrite(ledPin, LOW);    // LED OFF
  } else {
    // If voltage is low (current has gone OFF)
    digitalWrite(ledPin, HIGH);   // LED ON
  }

  delay(500);  // Delay for half a second
}