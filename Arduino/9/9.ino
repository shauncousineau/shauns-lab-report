/* goal PB and LED 
*/ 
int pushButton = 2; 
int GREEN = 8; 
int BLUE = 7; 
int RED = 6; 
// the setup routine runs once when you press reset: 
void setup() { 
  // initialize serial communication at 9600 bits per second: 
  Serial.begin(9600); 
  // make the pushbutton's pin an input: 
  pinMode(pushButton, INPUT); 
 pinMode(2, INPUT_PULLUP); 
 pinMode(8,OUTPUT); 
 pinMode(7,OUTPUT); 
 pinMode(6,OUTPUT); 
} 
// the loop routine runs over and over again forever: 
void loop() { 
  // read the input pin: 
  int buttonState = digitalRead(pushButton); 
  // print out the state of the button: 
  Serial.println("buttonState");  //this will print exactly whats in quatation 
  Serial.print("\t");   //this will print a tab 
   Serial.println(buttonState);  //this will print 
  delay(1);  // delay in between reads for stability 
    digitalWrite(RED, HIGH); // sets the digital pin 13 on 
    digitalWrite(GREEN, !buttonState); // sets the digital pin 13 on 
    digitalWrite(BLUE, buttonState); // sets the digital pin 13 on 
} 