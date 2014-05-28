/*Touch Control library V1.0
by JX Pan MAY 2014

It basically turns jumpers into touch sonsors

The only function returns integer between 1-17. If the bare end of the jumper attached to “pinToMeasure” is pressed by your finger, the return value would be 2 or more

BASED ON CODE FROM HERE: http://playground.arduino.cc/Code/CapacitiveSensor/

*/


#ifndef JumperTouchSensor_h
#define JumperTouchSensor_h

class JTS {
public:
 int readCapacitivePin(int pinToMeasure) ;


};

#endif
