#include <stdio.h>
#include <stdbool.h>
int main(){
    int m,n;
    const int original=1000;
    scanf("%d %d",&m,&n);
    int max=original;
    while(max>0) {
        bool CanBePre = false;
        for(int a=0;a*m<original;a++) {
            for(int b=0;b*n<original;b++) {
            if(max==a*m+b*n) {
                CanBePre=true;
                break;
                }
            }
        }
        if(!CanBePre) {
            printf("%d",max);
            break;
        }
        max--;
    }

  return 0;
 }
