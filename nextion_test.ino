void setup() {
  Serial.begin(9600);
  Serial1.begin(9600); // Use Serial1 instead
}

void loop() {
  Serial1.print("t0.txt=\"Hello!\"");  
  Serial1.write(0xFF); Serial1.write(0xFF); Serial1.write(0xFF);

  Serial.println("Sent to Nextion");
  delay(2000);
}
