void setup()
{
  // put your setup code here, to run once:
  pinMode(3, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == HIGH)
  {
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
  }
  else
  {
    digitalWrite(9, LOW);
    delay(100);
  }
}