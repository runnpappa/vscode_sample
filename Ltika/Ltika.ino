// #define interruptPin 2
boolean state = true;
void sw_led();

void setup()
{
  // put your setup code here, to run once:
  // pinMode(3, INPUT_PULLUP);
  // Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  attachInterrupt(digitalPinToInterrupt(2), sw_led, RISING);
}

void loop()
{
  // put your main code here, to run repeatedly:
  while (state == true)
  {
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    delay(100);
  }
  // exit(0);
}

void sw_led()
{
  // state != state;
  digitalWrite(7, HIGH);
  state = false;
}