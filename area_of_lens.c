/**
 * Author: Zubeyir Durgut
 * Date:2021/01/24
 * Recource: Chris brouke firstlesson
 * This project's resource Chris Broke's CSCE I lessons book:
 * Excersise 2.27
 * 
 * Project aim
 * Calculation intersection of two circles which intersect each other
 * There is a lens
 * 
 * 
 * r:remain     m:mass      y:years later       H:Elements half-life duration
 * 
 
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char ** argv){

double A,r=1,d=2.44,R=2;


A=pow(r,2)*acos((pow(d,2)+pow(r,2)-pow(R,2))/(2*d*r))+pow(R,2)*acos((pow(d,2)-pow(r,2)+pow(R,2))/(2*d*R))-0.5*sqrt((-d+r+R)*(d+r-R)*(d-r+R)*(d+r+R));
printf("%f",A);
double b=acos(0.55);
printf("\n%f",b);
return 0;
}
