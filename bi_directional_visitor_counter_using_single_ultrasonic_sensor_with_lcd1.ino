//Bi-Directional Visitor Counter Using Single Ultrasonic Sensor With LCD
int trig = 10;
int fan =8;
int echo = 9;
int led = 7;
int buzzer= 6;
int i=0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
   lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,7);
  pinMode(fan,8);
  pinMode(buzzer,OUTPUT);
  lcd.setCursor(4,0);
  lcd.print("Welcome");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Please wait.");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait..");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait...");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Please wait.");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait..");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait...");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Please wait.");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait..");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait...");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Visitor Counter");
    lcd.setCursor(1,1);
  lcd.print("By MUDIT JAIN");
  delay(2500);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("P"); 
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
 
  digitalWrite(trig,HIGH);
  delayMicroseconds(15);
 
  
  digitalWrite(trig,LOW);
 
  
  int a = pulseIn(echo,HIGH);
 
  
 int distance = a*0.034/2;
  
  

  if ( distance<40) //in
  {
  i=i+1;
    delay(10000);  
     lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("People visited:"); 
    lcd.setCursor(0,1);
  lcd.print(i);
    delay(400);
  
  }
  else if ( distance<80) //out
  {
  i=i-1;
    delay(10000);
     lcd.clear();
     lcd.setCursor(0,0);
  lcd.print("People Exist:"); 
    lcd.setCursor(0,1);
  lcd.print(i); 
     delay(400);
    
  }
 
}
  
 