//
// Created by Zeto on 24-10-11.
//
#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    if(n==1) {
        printf("                        ");
        printf(" 1  \n");
        for(int i=1;i<=m/6;i++) {
            for(int j=1;j<=7;j++) {
                if(7*i+j-6<=m)
                    printf("%2d  ",7*i+j-6);
            }
            printf("\n");
        }
        }else for(int i=2; i<=n; i++) {
            if(n==i) {
                for(int j=1;j<=4*i-8;j++) {
                    printf(" ");
                }
                for(int t=1;t<=9-i;t++) {
                    printf("%2d  ",t);
                }
                printf("\n");
                for(int k=1;k<=(m+i-8)/6;k++) {
                    for(int p=1;p<=7;p++) {
                        if(7*k-i+p+2<=m)
                            printf("%2d  ",7*k-i+p+2);
                    }
                    printf("\n");
                }
            }
        }
        return 0;
    }
