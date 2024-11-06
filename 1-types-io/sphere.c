//
// Created by Zeto on 24-9-26.
//
#include <stdio.h>
#include <math.h>

int main(void) {

    const double pi = 3.14159;
    int radius = 100;
    double surface_area = 4 * pi * pow(radius,2);
    double volume = 4.0/3.0 * pi * pow(radius,3);
    printf("%-15.4f : surface_area\n%-15.4f : volume\n",surface_area,volume);
    return 0;
}

