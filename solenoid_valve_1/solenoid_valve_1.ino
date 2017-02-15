//based on code from https://www.bc-robotics.com/tutorials/controlling-a-solenoid-valve-with-arduino/
/* Arduino code for touch sensor
 *  based on code by Edgaras Art on Youtube.com
 *  modified by Camille Baumann-Jaeger
 *  
  */

int solenoidPin= 13; // output pin for Arduino
int TouchSensor = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(solenoidPin, OUTPUT);
  pinMode(TouchSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(TouchSensor)==HIGH) //reads the touch sensor
  {
    digitalWrite(solenoidPin, HIGH);
    Serial.println("pin on");
  }
  else
  {
  digitalWrite(solenoidPin, LOW);
  Serial.println("pin off");
  }
}
