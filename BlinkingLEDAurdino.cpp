// C++ code
// blinking LED
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  //digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}