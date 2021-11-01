void setup()
{
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
}
void loop()
{
    delay(500);
    digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
}