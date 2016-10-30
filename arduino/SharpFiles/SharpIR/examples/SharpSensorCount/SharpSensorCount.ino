#include <SharpIR.h>

#define ir A0
#define model 1080

SharpIR sharp(ir, 25, 93, model);

// ir: the pin where your sensor is attached
// model: an int that determines your sensor:  1080 for GP2Y0A21Y
//                                            20150 for GP2Y0A02Y
//                                            (working distance range according to the datasheets)


int counter = 0;

void setup(){
  
  Serial.begin(9600);
  pinMode (ir, INPUT);
  
}

void loop(){
  
  int dis=sharp.distance();  // this returns the distance to the object you're measuring
  Serial.println("distance ");
  Serial.println(dis);
  
  if (dis > 0 && dis < 100){ //if the number is a real number, and less than 100, the value will increase by 1
  
    counter += 1;
  }
  Serial.println("current number");
  Serial.println(counter);
  
  delay(1000);

}
  

