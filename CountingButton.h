int count = 0; //count 0으로 초기화

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int readValue = digitalRead(9);
  
  if(readValue == 1){
    Serial.println(String("Value : ") + readValue);
    count = count + 1;
  }
  
  Serial.println(String("Count : ") + count);
  delay(1000);
}
