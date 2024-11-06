//
// Created by Zeto on 24-10-8.
//
#include <stdio.h>
int main() {
    int n=1;
    int i=1;
    double temp=1,e=0;
    scanf("%d",&n);
    for(;i<=n;i++) {
       temp*=i;
        e+=1.0/temp;
    }
    printf("%f",e+1);
    return 0;

}