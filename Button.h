void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(11, INPUT);
}

void loop()
{
  int readValue = digitalRead(11);
  
  if(readValue == HIGH){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  
  Serial.print(String("Button Value : ") + readValue);
  Serial.print("\n");
  delay(1000);
//Pull-Up 방식은 Pull-Down과 반대로 기본이 1(True)상태임
// 읽은 값이 1이면 시리얼 모니터 on출력  
  if(readValue == 1){
    Serial.println("On");
    delay(1000);
  }
// 읽은 값이 0이면 시리얼 모니터 off출력
  else{
    Serial.println("Off");
    delay(1000);
  }
    
}
