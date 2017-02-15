//based on code from https://www.bc-robotics.com/tutorials/controlling-a-solenoid-valve-with-arduino/
/* Arduino code for touch sensor
 *  based on code by Edgaras Art on Youtube.com
 *  modified by Camille Baumann-Jaeger
 *  
  */

int solenoidPin= 13; // output pin for first solenoid valve
int solenoidPin2=5; // output pin for second solenoid valve
int TouchSensor = 2;
int TouchSensor1 = 3; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(solenoidPin, OUTPUT);
  pinMode(solenoidPin2, OUTPUT);
  pinMode(TouchSensor, INPUT);
  pinMode(TouchSensor1, INPUT);
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
  if (digitalRead(TouchSensor1)==HIGH)
  {
    digitalWrite(solenoidPin2, HIGH);
    Serial.println("pin on");
  }
  else 
  {
  digitalWrite(solenoidPin2, LOW);
  Serial.println("pin off");
  }
}
