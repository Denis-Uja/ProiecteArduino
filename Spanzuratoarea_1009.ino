#include "BluetoothSerial.h" //Header File for Serial Bluetooth
BluetoothSerial ESP_BT; //Object for Bluetooth
int incoming;
String c[7];
bool v=0;
bool p,r,o,i,e,k,t=0;
int x=0;
void setup() {
Serial.begin(9600); 
ESP_BT.begin("Gandacul 1009"); 
pinMode (4, OUTPUT);
pinMode (16, OUTPUT);
pinMode (17, OUTPUT);
pinMode (18, OUTPUT);
pinMode (19, OUTPUT);
pinMode (21, OUTPUT);
pinMode (22, OUTPUT);
pinMode (23, OUTPUT);
c[0]="_ ";
c[1]="_ ";
c[2]="_ ";
c[3]="_ ";
c[4]="_ ";
c[5]="_ ";
c[6]="_ ";
}
void loop() {
  if(ESP_BT.available())
  {
    if(v==0)
    {
      ESP_BT.print("Spanzuratoarea: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
      v=1;
    }
  }
  if(p && r && o && i && e && k && t)
  {
    ESP_BT.println("Ai castigat :)");
    while(p);
    {
      ESP_BT.println("Reseteaza ESP-ul pt. a juca din nou");
      delay(5000);
    }
  }
if (ESP_BT.available()) 
{
incoming = ESP_BT.read();
Serial.print("Primit:"); Serial.println(incoming);
if(incoming==80 || incoming==112)
{
  c[0]="P";
  ESP_BT.print("Corect: ");
  ESP_BT.print(c[0]);
  ESP_BT.print(c[1]);
  ESP_BT.print(c[2]);
  ESP_BT.print(c[3]);
  ESP_BT.print(c[4]);
  ESP_BT.print(c[5]);
  ESP_BT.println(c[6]);
  digitalWrite(4 , HIGH);
  delay(1000);
  digitalWrite(4 , LOW);
  p=1;
}else
if(incoming==82 || incoming==114)
{
  c[1]="R";
  ESP_BT.print("Corect: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  r=1;
}else
if(incoming==79 || incoming==111)
{
  c[2]="O";
  ESP_BT.print("Corect: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  o=1;
}else
if(incoming==73 || incoming==105)
{
  c[3]="I";
  ESP_BT.print("Corect: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  i=1;
}else
if(incoming==69 || incoming==101)
{
  c[4]="E";
  ESP_BT.print("Corect: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  e=1;
}else
if(incoming==67 || incoming==99)
{
  c[5]="C";
  ESP_BT.print("Corect: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  k=1;
}else
if(incoming==84 || incoming==116)
{
  c[6]="T";
  ESP_BT.print("Corect: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  t=1;
}else
if(incoming<=64)
{}else
{
  x++;
  ESP_BT.println("Gresit: ");
      ESP_BT.print(c[0]);
      ESP_BT.print(c[1]);
      ESP_BT.print(c[2]);
      ESP_BT.print(c[3]);
      ESP_BT.print(c[4]);
      ESP_BT.print(c[5]);
      ESP_BT.println(c[6]);
  if(x==1)
  {
    digitalWrite(23,HIGH);
  }
  if(x==2)
  {
    digitalWrite(22,HIGH);
  }
  if(x==3)
  {
    digitalWrite(21,HIGH);
  }
  if(x==4)
  {
    digitalWrite(19,HIGH);
  }
  if(x==5)
  {
    digitalWrite(18,HIGH);
  }
  if(x==6)
  {
    digitalWrite(17,HIGH);
  }
  if(x==7)
  {
    digitalWrite(16,HIGH);
    ESP_BT.println("Ai pierdut :(");
    while(x==7)
    {
      ESP_BT.println("Reseteaza esp-ul pt. a juca din nou");
      delay(5000);
    }
  }
}
}
delay(20);
}
