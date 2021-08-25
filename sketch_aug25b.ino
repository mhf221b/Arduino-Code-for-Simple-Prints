void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // 9600 is the baud rate (bps)
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(42);
  Serial.println();
  delay(1000);
  Serial.print('M');
  Serial.println();
  delay(1000);
  Serial.print("Mehedi Hasan");
  Serial.println();
  delay(1000);
  Serial.print(42.567);
  Serial.println();
  delay(1000);
  
}
