void setup(){
  Serial.begin(9600);
}
void loop(){
  int val;
  int mappedValue;
  val = analogRead(A0);
  Serial.print("Analog Value: " );
  Serial.println(val);
  
  mappedValue = map(val,322,667,100,0);
  Serial.print("Soil Moisture Percentage: ");
  Serial.println(mappedValue);
  
  delay(1000);
}
