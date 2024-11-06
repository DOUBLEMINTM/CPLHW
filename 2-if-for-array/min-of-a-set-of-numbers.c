//
// Created by Zeto on 24-10-6.
//
#include <stdio.h>
#define SIZE 1000
int main() {
  int numbers[SIZE]={0};
    int size = 0;
    scanf("%d",&size);

    for( int i=0;i<size;i++) {
        scanf("%d",&numbers[i]);
    }
    int min = numbers[0];
    for(int i = 1;i < size;i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("The minimum is %d\n", min);
    return 0;
}