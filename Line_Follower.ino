// Please read the description file for better understanding.
int acleft4 = 4;  // ac = anticlockwise
int cleft5 = 5;  // c = clockwise
int acright6 = 6;
int cright7 = 7;
int pwm = 3; // Use only if you want to control the speed of dc motor
int pwm1 = 11; // Use only if you want to control the speed of dc motor
void setup() {
  // put your setup code here, to run once:  
//Serial.begin(9600);  //Use when calibrating according to your surroundings
pinMode(acleft4, 1);
pinMode(cleft5, 1);
pinMode(acright6, 1);
pinMode(cright7, 1);
pinMode(A0,0);
pinMode(A1,0);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(A0);
int y = analogRead(A1);
/*Serial.println("Value of sensor right");  //Use when calibrating according to your surroundings
Serial.println(x);
Serial.println("Value of sensor left");
Serial.println(y);*/
analogWrite(pwm,70);   // Use only if you want to control the speed of dc motor
analogWrite(pwm1,70);   // Use only if you want to control the speed of dc motor
if (x > 500)            
  {
  digitalWrite(cright7, 1);  // moving Right
  digitalWrite(acright6, 0);
  digitalWrite(cleft5, 0);                                
  digitalWrite(acleft4, 1);
  delay(650);
  }
else if (y > 500)
  {
  digitalWrite(cright7, 0);  // moving Left
  digitalWrite(acright6, 1);
  digitalWrite(cleft5, 1);                                
  digitalWrite(acleft4, 0);
  delay(650);
  }
else
  {
  digitalWrite(cright7, 1);  // moving Foward
  digitalWrite(acright6, 0);
  digitalWrite(cleft5, 1);                                
  digitalWrite(acleft4, 0);
  }
}
