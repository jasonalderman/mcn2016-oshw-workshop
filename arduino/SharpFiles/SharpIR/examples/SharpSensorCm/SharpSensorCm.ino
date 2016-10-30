#include <SharpIR.h>

#define ir A0
#define model 20150

SharpIR sharp(ir, 25, 93, 1080);

// ir: the pin where your sensor is attached
// model: an int that determines your sensor:  1080 for GP2Y0A21Y
//                                            20150 for GP2Y0A02Y
//                                            (working distance range according to the datasheets)


void setup(){
  
  Serial.begin(9600);// opens serial communication
  pinMode (ir, INPUT);// reads the IR sharp as incoming data
  
}

void loop(){
  
 
  int dis=sharp.distance();  // this returns the distance to the object you're measuring

 // Serial.print("Mean distance: ");  // returns it to the serial monitor
  //Serial.print("distance: ");
  Serial.println(dis);
  
  delay(1000);//waits one second and then runs the loop again

}
  

