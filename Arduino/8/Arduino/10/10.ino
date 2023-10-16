/*the goal is to give an RGB a specific color 
*/ 
int GREEN = 13;//  sets green to pin 13 
int BLUE = 12;// sets blue to pin 12 
int RED = 11;// sets red to pin 11 
// the setup routine runs once when you press reset: 
void setup() { 
 pinMode(13,OUTPUT);//puts pin 13 as output 
 pinMode(12,OUTPUT);// puts pin 12 as output 
 pinMode(11,OUTPUT);// puts pin 11 as output 
} 
// the loop routine runs over and over again forever: 
void loop() { 
    analogWrite(RED, 59);//puts the analog value of red at 59 
    analogWrite(GREEN, 23);//puts analog value of green at 23 
    analogWrite(BLUE, 191);//puts analog value of blue at 123 
   } 
