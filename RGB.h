int r = 9, g = 10, b = 11;

void setup()
{
  
}

void loop()
{
  analogWrite(r, 255);
  analogWrite(g, 0);
  analogWrite(b, 0);
  delay(1000);
}
