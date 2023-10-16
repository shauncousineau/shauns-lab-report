int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
analogRead(A0);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
float sensorValue = analogRead(A0);
float voltage = sensorValue * (5.0 / 1023.0);
serial.println(voltage);

if (voltage >=1) {
  digitalWrite(LED1, HIGH);
 } else digitalWrite(LED1, LOW); 
 if (voltage >=2) {
  digitalWrite(LED2, HIGH);
 } else digitalWrite(LED2, LOW);  
 if (voltage >=3) {
  digitalWrite(LED3, HIGH);
 } else digitalWrite(LED3, LOW);  
 if (voltage >=4) {
  digitalWrite(LED4, HIGH);
 } else digitalWrite(LED4, LOW);  
 if (voltage >=5) {
  digitalWrite(LED5, HIGH);
 } else digitalWrite(LED5, LOW);   
}
