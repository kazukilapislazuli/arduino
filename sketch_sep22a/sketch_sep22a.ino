void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int a=digitalRead(sen);
digitalWrite(lp,HIGH);
digitalWrite(ln,LOW);
digitalWrite(rp,HIGH);
digitalWrite(rn,LOW);
if(a==1)
{while=(1)
  { digitalWrite(lp,LOW);
  digitalWrite(ln,HIGH);
  digitalWrite(rp,LOW);
  digitalWrite(rn,HIGH);
  }
}
