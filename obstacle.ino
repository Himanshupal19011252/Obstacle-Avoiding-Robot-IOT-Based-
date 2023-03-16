int trigPin = 9;
int echoPin = 10;
int revright = 4;      //reverse motion of Right motor
int fwdleft = 7;      
int revleft= 6;       
int fwdright= 5;       //Forward motion of Right motor
int c = 0;

void setup() { 
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  delay(10);
 
  
  if((distance>20))
 {
   digitalWrite(5,HIGH);                               
   digitalWrite(4,LOW);                              
   digitalWrite(6,LOW);                               
   digitalWrite(7,HIGH);                              
 }
 
  else if(distance<20)  
 {
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,HIGH);                                  
   digitalWrite(7,LOW);
                                            
 }
 
}