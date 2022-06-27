/*
 * Sketch: mecanum_Wheels.h
 * Date: 07/04/22
 * Author: Pedro Henrique P. da Silva
 * About: This library was criated with objective of performing certain functions with Mecanum wheels, in order to be used in robotic competitions;
 * Update in __/__/__, because: ;
 * 
 */

#ifndef mecanum_Wheels
#define mecanum_Wheels

class Mecanum{
  public:
    Mecanum(int left[6],int right[6]);


    void clockwise_m1();
    void antiClockwise_m1();
    void clockwise_m2();
    void antiClockwise_m2();
    void clockwise_m3();
    void antiClockwise_m3();
    void clockwise_m4();
    void antiClockwise_m4();
    void forward_left();
    void forward_right();
    void back_left();
    void back_right();
    void convergence_left();
    void convergence_right();
    void divergence_left();
    void divergence_right();
    void quadrant_1();
    void quadrant_2();
    void quadrant_3();
    void quadrant_4();
    void forward();
    void back();
    void right();
    void left();
    void spinCentral_cw();
    void spinCentral_acw();
    void stop();

  
    
  private:
    struct pont_h{
      int n1,n2,n3,n4,pwm1,pwm2;
    };
    struct pont_h pLeft;
    struct pont_h pRight;


    
};

#endif

 
