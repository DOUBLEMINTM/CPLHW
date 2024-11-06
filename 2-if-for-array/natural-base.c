//
// Created by Zeto on 24-10-7.
//
#include <stdio.h>
int main() {
    double semi_e=0,ret=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        int factorial=1;
        for(int j=1;j<=i;j++) {
            factorial *= j;
        }
        semi_e=1.0/factorial;
        ret+=semi_e;
    }

    printf("%f\n",ret + 1);
    return 0;
}