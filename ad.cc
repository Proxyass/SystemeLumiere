int analogPin=0;
int analogValue=0;
int ledPin=7; //entrée 7

void setup(){
Serial.begin(9600);
pinMode(lePin,OUTPUT);
}
void loop(){
analogValue=analogRead(analogPin);
Serial.println(analogValue);
digitalWrite(lePin,LOW); }
