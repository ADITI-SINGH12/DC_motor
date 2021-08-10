void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
clockwise();
delay(5000);
anticlockwise();
delay(5000);
mixed();
delay(5000);
}
void clockwise() {
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(7,1);
  digitalWrite(6,0);
}
void anticlockwise() {
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(7,0);
  digitalWrite(6,1);
}
void mixed() {
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(7,0);
  digitalWrite(6,1);
}
