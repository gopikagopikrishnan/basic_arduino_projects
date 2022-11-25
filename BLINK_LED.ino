int yPin = 9;
int bPin = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(yPin, OUTPUT);
pinMode(bPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(yPin, HIGH);
delay(75);
digitalWrite(yPin, LOW);
delay(75);
digitalWrite(bPin, HIGH);
delay(75);
digitalWrite(bPin, LOW);
delay(75);
}
