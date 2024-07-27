int motor1pin1=10;
int motor1pin2=11;
int motor2pin1=9;
int motor2pin2=3;
int s1=4;
int s2=5;
int s3=6;
int s4=7;
int s5=8;
int sen1=0;
int sen2=0;
int sen3=0;
int sen4=0;
int sen5=0;
void setup() {
  // put your setup ce here, to run once:
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  
}

void loop() {
 sen1 = digitalRead(s1);
 sen2 = digitalRead(s2);
 sen3 = digitalRead(s3);                                                                         
 sen4 = digitalRead(s4);
 sen5 = digitalRead(s5);
 if(sen1==1 && sen2==1 && sen3==0 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==1 && sen2==0 && sen3==0 && sen4==0 && sen5==1){
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==1 && sen2==0 && sen3==0 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==1 && sen2==0 && sen3==1 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==0 && sen2==0 && sen3==0 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  analogWrite(motor1pin2, 180);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==0 && sen2==1 && sen3==0 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  analogWrite(motor1pin2, 180);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==0 && sen2==1 && sen3==1 && sen4==0 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  analogWrite(motor1pin2, 180);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==1 && sen2==1 && sen3==0 && sen4==0 && sen5==1){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);}
    
 else if(sen1==1 && sen2==1 && sen3==1 && sen4==0 && sen5==1){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);}
  
 else if(sen1==1 && sen2==1 && sen3==1&& sen4==0 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}
  
 else if(sen1==1 && sen2==1 && sen3==1 && sen4==1 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}
  
 else if(sen1==1 && sen2==1 && sen3==0 && sen4==1 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}
 else if(sen1==1 && sen2==0 && sen3==1 && sen4==1 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}
  
  else if(sen1==1 && sen2==1 && sen3==1 && sen4==1 && sen5==1){
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
  }
  else if(sen1==0 && sen2==0 && sen3==0 && sen4==0 && sen5==0){
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, LOW);
  }
  else if(sen1==0 && sen2==1 && sen3==1 && sen4==1 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}

  else if(sen1==1 && sen2==1 && sen3==0 && sen4==0 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}

  else if(sen1==1 && sen2==0 && sen3==0 && sen4==0 && sen5==0){
  analogWrite(motor1pin1, 180);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 180);}

  else if(sen1==0 && sen2==0 && sen3==0 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  analogWrite(motor1pin2, 180);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}

  else if(sen1==0 && sen2==0 && sen3==0 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  analogWrite(motor1pin2, 180);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  else if(sen1==0 && sen2==0 && sen3==1 && sen4==1 && sen5==1){
  digitalWrite(motor1pin1, LOW);
  analogWrite(motor1pin2, 180);
  analogWrite(motor2pin1, 180);
  digitalWrite(motor2pin2, LOW);}
  else{
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);}
  
}