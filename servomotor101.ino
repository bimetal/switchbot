unsigned int onperiod=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(D1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D1,HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(onperiod);                       // wait for a second
  digitalWrite(D1, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(20000-onperiod);                       // wait for a second
}
