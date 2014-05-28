/*Touch Control library V1.0 EXAMPLE: Touch control a led
by JX Pan
BASED ON:
CODE FROM HERE: http://playground.arduino.cc/Code/CapacitiveSensor/
and
CODE FROM HERE: http://tieba.baidu.com/p/2060482431
*/


#include <JumperTouchSensor.h>
JTS T;  //define a JTS(jumper touch sensor)

int ledPin = 9;
byte capval;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Touch senser");
}

void loop ()
{
  digitalWrite(ledPin,LOW);
  capval = T.readCapacitivePin(8);
  Serial.println(capval, DEC);
  if (capval > 2) { 
    digitalWrite(ledPin, HIGH); 
    delay(10);
  } 
}

