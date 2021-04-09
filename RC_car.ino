int leftir=13;
int rightir=12;
int mtrr1=9;
int mtrr2=10;
int mtrl1=5;
int mtrl2=6;
int m,n;

void setup() {
Serial.begin(9600);
pinMode(leftir,INPUT);
pinMode(rightir,INPUT);
pinMode(mtrr1,OUTPUT);
pinMode(mtrr2,OUTPUT);
pinMode(mtrl1,OUTPUT);
pinMode(mtrl2,OUTPUT);
}

void loop() {
m=digitalRead(leftir);
n=digitalRead(rightir);
if(m==0 && n==0)
{
  digitalWrite(mtrr1,LOW);     //FORWARD
  digitalWrite(mtrr2,HIGH);
  digitalWrite(mtrl1,LOW);
  digitalWrite(mtrl2,HIGH);
}
else if(m==1 && n==0)
{
  digitalWrite(mtrr1,LOW);     //LEFTWARD
  digitalWrite(mtrr2,HIGH);
  digitalWrite(mtrl1,HIGH);
  digitalWrite(mtrl2,LOW);
}
else if(m==0 && n==1)
{
  digitalWrite(mtrr1,HIGH);    //RIGHTWARD
  digitalWrite(mtrr2,LOW);
  digitalWrite(mtrl1,LOW);
  digitalWrite(mtrl2,HIGH);
}
else if(m==1 && n==1)
{
  digitalWrite(mtrr1,LOW);     //STOP
  digitalWrite(mtrr2,LOW);
  digitalWrite(mtrl1,LOW);
  digitalWrite(mtrl2,LOW);
}
}
