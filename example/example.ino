/*
 * Sketch: mecanum_Wheels.ino
 * Date: 07/04/22
 * Author: Pedro Henrique P. da Silva
 * About: This library was criated with objective of performing certain functions with Mecanum wheels, in order to be used in robotic competitions;
 * Update in __/__/__, because: ;
 * 
 */

#include <mecanum_Wheels.h>

int left[6] = {2,3,4,5,6,7};
int right[6] = {8,9,10,11,12,13};

Mecanum robot(left,right);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

}
