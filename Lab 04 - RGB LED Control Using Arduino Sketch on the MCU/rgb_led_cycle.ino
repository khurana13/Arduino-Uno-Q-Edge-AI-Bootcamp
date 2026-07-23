void setup() {
  // Configure LED3 pins as outputs
  pinMode(LED3_R, OUTPUT);
  pinMode(LED3_G, OUTPUT);
  pinMode(LED3_B, OUTPUT);

  // Turn all LEDs off initially
  digitalWrite(LED3_R, HIGH);
  digitalWrite(LED3_G, HIGH);
  digitalWrite(LED3_B, HIGH);
}

void loop() {
  // Red LED ON
  digitalWrite(LED3_R, LOW);
  digitalWrite(LED3_G, HIGH);
  digitalWrite(LED3_B, HIGH);
  delay(1000);

  // Green LED ON
  digitalWrite(LED3_R, HIGH);
  digitalWrite(LED3_G, LOW);
  digitalWrite(LED3_B, HIGH);
  delay(1000);

  // Blue LED ON
  digitalWrite(LED3_R, HIGH);
  digitalWrite(LED3_G, HIGH);
  digitalWrite(LED3_B, LOW);
  delay(1000);
}
