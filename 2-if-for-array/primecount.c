//
// Created by Zeto on 24-10-8.
//
#include <stdio.h>
int main() {
    int i=2,n=2,anti_num=0;
    scanf("%d",&n);
    for(;i<=n;i++) {
        int j=2;
        for(;j*j<=i;j++) {
            if(i%j==0) {
                anti_num++;
                break;
            }
        }
    }
    printf("%d\n",n-1-anti_num);
    return 0;
}