int out1 = 8;
int out2 = 7;
void setup()
{
pinMode(out1,OUTPUT);
pinMode(out2,OUTPUT);
}
void loop()
{
digitalWrite(out2,LOW);
digitalWrite(out1,HIGH);
delay(20);
digitalWrite(out1,LOW);
digitalWrite(out2,HIGH);
delay(20);
}
