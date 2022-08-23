//interfacing ultrasonic sensor with arduino microcontroller.

#define echoPin2 //define the location of echo pin 
#define trigPin3 //define the location of trig pin
long duration;  // duration for one echo cycle
int distance;   //distance travelled by the echo signals


void setup() {
   // setup of echo and trig pins: serial communication:
  serial.begin(9600); //9600 is the baud rate in the serial communication.
  pinMode(trigPin,OUTPUT);  //transmission of signals to the object through a distance.
  pinMode((echoPin,INPUT); //receiving analog signals as input into the ultrasonic sensor after a duration.
  
}
void loop() {
   digitalWrite(trigPin,LOW);
      delayMicroseconds(2);
   digitalWrite(trigPin,HIGH);
      delayMicroseconds(10);
   digitalWrite((trigPin,LOW);


   duration=pulseIn(echoPin,HIGH);
        distance=(duration*0.034/2); //speed of light is 340m/s, c=2d/t: hence  d=ct/2
        serial.print("Distance");    
        serial.print(distance);
        serial.printIn("cm");
         delay(1000);
}
