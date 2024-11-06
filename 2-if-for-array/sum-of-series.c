//
// Created by Zeto on 24-10-7.
//
#include <stdio.h>
int main() {
    //input N as the maximum of the series
    int N=0;
    scanf("%d",&N);
    //make a loop to accumulate the sum of the first n terms
    int sum=0;
    for(int i=1;i<=N;++i) {
        sum+=i;
    }
    printf("The sum of the series is %d",sum);
    return 0;
}