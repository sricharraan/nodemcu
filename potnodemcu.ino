uint8_t Pin = A0;
 // declare Input pin on NodeMCU Dev Kit
void setup() {
pinMode(Pin, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
Serial.begin(115200);
Serial.println(analogRead(Pin));
if(analogRead(Pin)>=400)
{
  digitalWrite(LED_BUILTIN, LOW);
delay(1000);// Wait for a second
}
else
{
  digitalWrite(LED_BUILTIN, HIGH);
delay(1000);// Wait for a second
}

}
