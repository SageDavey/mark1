void setup() {
  Serial.begin(9600);     // Serial Monitor output
  Serial1.begin(9600);    // Nextion Serial communication
  
  Serial.println("Starting Nextion Communication...");
}

void loop() {
  Serial.println("Sending command to Nextion...");
  
  Serial1.print("t0.txt=\"Hello!\"");  
  Serial1.write(0xFF); Serial1.write(0xFF); Serial1.write(0xFF);

  Serial.println("Command sent!");
  
  delay(2000);
}

