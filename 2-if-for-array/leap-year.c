//
// Created by Zeto on 24-10-6.
//
#include <stdio.h>
#include <stdbool.h>
//function declaration
//function prototype scope
//year:formal parameter(形参)
bool IsLeapYear(int year);
//function definition
//block scope
bool IsLeapYear(int year) {
    bool leap = false;

    if ( !year % 4  && year % 100  || ! year % 400 ) {
        leap = true;
    }
    return leap;
}
int main() {
    int year = 0;
    scanf("%d", &year);

    //():function call operator
    //int year: actual argument(实参)
    //formal parameter = actual argument
    bool leap = IsLeapYear(year);
        if(leap){
            printf("Leap year!\n");
        }else {
            printf("Normal year!\n");
        }

    return 0;
}


