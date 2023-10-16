/* RGB light chaser pattern green red blue white 
*/ 
int Green = 13 ; 
int Red = 12 ; 
int Blue = 11 ; 
void setup() { 
  // put your setup code here, to run once: 
pinMode(13,OUTPUT);//sets pin 13 as output 
pinMode(12,OUTPUT);//sets pin 12 as output 
pinMode(11,OUTPUT);//sets pin 11 as output 
} 
void loop() { 
  // put your main code here, to run repeatedly: 
 digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level) 
  delay(1000);                      // wait for a second 
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW 
  delay(1000);                      // wait for a second 
   digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level) 
  delay(1000);                      // wait for a second 
  digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW 
  delay(1000);                      // wait for a second 
   digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level) 
  delay(1000);                      // wait for a second 
  digitalWrite(11, LOW);   // turn the LED off by making the voltage LOW 
  delay(1000);                      // wait for a second 
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
  delay(1000); 

} 
