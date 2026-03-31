int cds = A0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int cdsValue = analogRead(cds);
  
  Serial.print("CDS value : ");
  Serial.print(cdsValue);
  Serial.print("\n");
  delay(1000);
}
