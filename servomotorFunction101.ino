void servomotor(int degree)
{
  unsigned int period=((2000/180)*degree)+500;
  Serial.println(period);
  digitalWrite(D1,HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(period);                       // wait for a second
  digitalWrite(D1, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(20000-period);                       // wait for a second
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(D1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  servomotor(0);
}
