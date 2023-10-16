
int pushButton = 10; 
// constants won't change. Used here to set a pin number: 
const int ledPin = 5;  // the number of the LED pin 
// Variables will change: 
int ledState = LOW;  // ledState used to set the LED 
// Generally, you should use "unsigned long" for variables that hold time 
// The value will quickly become too large for an int to store 
unsigned long previousMillis = 0;  // will store last time LED was updated 
// constants won't change: 
const long interval = 5000;  // interval at which to blink (milliseconds) 
void setup() { 
  // set the digital pin as output: 
  pinMode(5, OUTPUT); 
  // initialize serial communication at 9600 bits per second: 
  Serial.begin(9600); 
  pinMode(pushButton, INPUT); // set pushbutton as input 
} 
void loop() { 
  // here is where you'd put code that needs to be running all the time. 
  // check to see if it's time to blink the LED; that is, if the difference 
  // between the current time and last time you blinked the LED is bigger than 
  // the interval at which you want to blink the LED. 
  unsigned long currentMillis = millis(); 
  if (currentMillis - previousMillis >= interval) { 
    // save the last time you blinked the LED 
    previousMillis = currentMillis; 
    // if the LED is off turn it on and vice-versa: 
    if (ledState == LOW) { 
      ledState = HIGH; 
    } else { 
      ledState = LOW; 
    } 
  } 
  digitalWrite(ledPin, ledState); 
  int buttonState = digitalRead(pushButton); 
  // print out the state of the button: 
  Serial.println(buttonState); 
} 