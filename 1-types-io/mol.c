//
// Created by Zeto on 24-9-26.
//
#include <stdio.h>
int main() {
    const double MOL = 6.02e23;
    const int GRAM_PER_MOL = 32;
    int mass = 6;
    double quantity = 1.0*mass / GRAM_PER_MOL * MOL;
    printf("quantity = %.3e\n",quantity);

    return 0;
}