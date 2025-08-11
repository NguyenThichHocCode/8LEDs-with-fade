int led[] = {3, 4, 5, 6, 7, 8, 9, 10};
int i;
void setup() {
  for (i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);

  }
}
void on() {
  for (i = 0; i < 8; i++) {
    digitalWrite(led[i], HIGH);
    delay(1000);
  }
}
void off() {
  for (i = 0; i < 8; i++) {
    digitalWrite(led[i], LOW);
    delay(500);
  }
}

void loop()
{
  on();
  delay(1000);
  off();
}
