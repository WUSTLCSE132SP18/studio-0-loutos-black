void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  long t = millis();
  Serial.print(t/1000);
Serial.println(" seconds have elapsed");
Serial.print(millis());
Serial.println(" milli-seconds have elapsed");
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(500);
}
