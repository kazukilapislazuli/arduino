#define lp 4
#define ln 7
#define el 5
#define rp 12
#define rn 8
#define er 6
void setup()
{
  pinMode(lp,OUTPUT);
  pinMode(ln,OUTPUT);
  pinMode(el,OUTPUT);
  pinMode(rp,OUTPUT);
  pinMode(rn,OUTPUT);
  pinMode(er,OUTPUT);
  digitalWrite(er,HIGH);
  digitalWrite(el,HIGH);
}
void loop()
{//to run forward for 10 seconds
  digitalWrite(er,HIGH);
  digitalWrite(rp,HIGH);
  digitalWrite(rn,LOW);
  digitalWrite(el,HIGH);
  digitalWrite(lp,HIGH);
  digitalWrite(ln,LOW);
  delay(10000);
  //to move left until 5 seconds
  digitalWrite(er,HIGH);
  digitalWrite(rn,HIGH);
  digitalWrite(rp,LOW);
  digitalWrite(el,LOW);
  delay(5000);
  //to move right for 5 seconds
  digitalWrite(el,HIGH);                            //3600 for 180* turn
                                                    //1250 for 90* turn
 
  digitalWrite(rn,HIGH);
  digitalWrite(rp,LOW);
  delay(5000);
  //run forward again for 10 seconds
  digitalWrite(el,HIGH);
  digitalWrite(lp,HIGH);
  digitalWrite(ln,LOW);
  digitalWrite(er,HIGH);
  digitalWrite(rp,HIGH);
  digitalWrite(rn,LOW);
}
