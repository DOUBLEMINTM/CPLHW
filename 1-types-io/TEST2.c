//
// Created by Zeto on 24-9-27.
//
#include<stdio.h>
#include<math.h>
int main(){
    double PI1,PI2;
    PI1=log(5280.0*5280.0*5280.0*
    (236674.0+30303.0*sqrt(61.0))*(236674.0+30303.0*sqrt(61.0))*(236674.0+30303.0*sqrt(61.0))+744.0)/sqrt(427.0);
    PI2=24*atan(1.0/8)+8*atan(1.0/57)+4*atan(1.0/239);
    printf("%.15f\n%.15f",PI1,PI2);
    return 0;
}