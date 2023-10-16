void setup() {
  // put your setup code here, to run once:
analogRead(A0);
byte(255);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
byte bitval = analogRead(A0);
serial.print(“BitValue”);
serial.println(bitval);
delay(500);

float sensorValue = analogRead(A0);
float voltage = sensorValue * (5.0/1023.0);
serial.print(“voltage ”);
serial.println(voltage);
delay(500)
}
