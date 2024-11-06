//
// Created by Zeto on 24-10-6.
//
#include <stdio.h>
int main() {
    int a=0,b=0,c=0;
    int min=0;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b) {
        if(a<c) {
            min=a;
        }else {
            min=c;
        }

    }else {
        if(b<c) {
            min=b;
        }else {
            min=c;
        }
    }
    printf("%d",min);
    return 0;
}