int re;
float val;

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  re=analogRead(0);
  val=re*(5/1023);
  if(val>2.5)
  {
    digitalWrite(12,HIGH);
    }
    else 
    digitalWrite(12,LOW);

}
