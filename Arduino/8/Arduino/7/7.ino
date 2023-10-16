int button = 6; // sets button as pin 6
// the setup routine runs once when you press reset: 
void setup() { 
 serial.begin(9600); //
 pinMode(button, INPUT_PULLUP); 
} 
// the loop routine runs over and over again forever: 
void loop() { 
int sensorvalue = digitalRead(button); 
serial.println(sensorvalue); 
} 