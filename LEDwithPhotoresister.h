int cds = A0;
int led = 9;

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
  
  if(cdsValue <= 100){
    analogWrite(led, 255);
  }
  else{
    analogWrite(led, 0);
  }

}
