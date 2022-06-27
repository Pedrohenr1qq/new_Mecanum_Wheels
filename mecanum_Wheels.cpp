/*
 * Sketch: mecanum_Wheels.cpp
 * Date: 07/04/22
 * Author: Pedro Henrique P. da Silva
 * About: This library was criated with objective of performing certain functions with Mecanum wheels, in order to be used in robotic competitions;
 * Update in __/__/__, because: ;
 * 
 */

#include "mecanum_Wheels.h"
#include "Arduino.h"

Mecanum::Mecanum(int left[6],int right[6]){
  pLeft = {left[0],left[1],left[2],left[3],left[4],left[5]};  
  pRight = {right[0],right[1],right[2],right[3],right[4],right[5]};
  for (int i = 0; i < 6; i++){
    pinMode(left[i],OUTPUT);
    pinMode(right[i],OUTPUT);
  }
}

//==========individual motor controls===========
//motor 1 clockwise
void Mecanum::clockwise_m1(){
  digitalWrite(pLeft.n1,LOW);
  digitalWrite(pLeft.n2,HIGH);
  analogWrite(pLeft.pwm1,255);
}

//motor 1 anticlockwise
void Mecanum::antiClockwise_m1(){
  digitalWrite(pLeft.n1,HIGH);
  digitalWrite(pLeft.n2,LOW);
  analogWrite(pLeft.pwm1,255);
}

//motor 2 clockwise
void Mecanum::clockwise_m2(){
  digitalWrite(pRight.n1,HIGH);
  digitalWrite(pRight.n2,LOW);
  analogWrite(pRight.pwm1,255);
}

//motor 2 anticlockwise
void Mecanum::antiClockwise_m2(){
  digitalWrite(pRight.n1,LOW);
  digitalWrite(pRight.n2,HIGH);
  analogWrite(pRight.pwm1,255);
}

//motor 3 clockwise
void Mecanum::clockwise_m3(){
  digitalWrite(pLeft.n3,LOW);
  digitalWrite(pLeft.n4,HIGH);
  analogWrite(pLeft.pwm2,255);
}

//motor 3 anticlockwise
void Mecanum::antiClockwise_m3(){
  digitalWrite(pLeft.n3,HIGH);
  digitalWrite(pLeft.n4,LOW);
  analogWrite(pLeft.pwm2,255);
}

//motor 4 clockwise
void Mecanum::clockwise_m4(){
  digitalWrite(pRight.n3,HIGH);
  digitalWrite(pRight.n4,LOW);
  analogWrite(pRight.pwm2,255);
}
//motor 4 anticlockwise
void Mecanum::antiClockwise_m4(){
  digitalWrite(pRight.n3,LOW);
  digitalWrite(pRight.n4,HIGH);
  analogWrite(pRight.pwm2,255);
}

//==========two motors============

void Mecanum::forward_left(){
  antiClockwise_m1();
  antiClockwise_m3();
}

void Mecanum::forward_right(){
  clockwise_m2();
  clockwise_m4();
}

void Mecanum::back_left(){
  clockwise_m1();
  clockwise_m3();
}

void Mecanum::back_right(){
  antiClockwise_m2();
  antiClockwise_m4();
}

void Mecanum::convergence_left(){
  antiClockwise_m1();
  clockwise_m3();
}

void Mecanum::convergence_right(){
  clockwise_m2();
  antiClockwise_m4();
}
void Mecanum::divergence_left(){
  clockwise_m1();
  antiClockwise_m3();
}
void Mecanum::divergence_right(){
  antiClockwise_m2();
  clockwise_m4();
}

void Mecanum::quadrant_1(){
  antiClockwise_m1();
  clockwise_m4();
}


void Mecanum::quadrant_2(){
  clockwise_m2();
  antiClockwise_m3();
}

void Mecanum::quadrant_3(){
  clockwise_m1();
  antiClockwise_m4();
}


void Mecanum::quadrant_4(){
  antiClockwise_m2();
  clockwise_m3();
}



//-------all motors========
void Mecanum::forward(){
  forward_left();
  forward_right();
}

void Mecanum::back(){
  back_left();
  back_right();
}

void Mecanum::left(){
  clockwise_m3();
  antiClockwise_m1();
  antiClockwise_m4();
  clockwise_m2();
}

void Mecanum::right(){
  clockwise_m1();
  antiClockwise_m3();
  antiClockwise_m2();
  clockwise_m4();
}

void Mecanum::spinCentral_cw(){
  forward_left();
  back_right();
}

void Mecanum::spinCentral_acw(){
  back_left();
  forward_right();
}

void Mecanum::stop(){
  analogWrite(pLeft.pwm1,0);
  analogWrite(pLeft.pwm2,0);
  analogWrite(pRight.pwm1,0);
  analogWrite(pRight.pwm2,0);
}
