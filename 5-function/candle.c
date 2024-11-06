#include <stdio.h>
#include <stdbool.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    const int ori_max = 1000;
    int max = ori_max;
    while(max) {
        bool CanBeDivided = false;
        int key_max =max;
       if(!(key_max%m)  || !(key_max%n)) {
           CanBeDivided = true;
       }else {
           while(key_max) {
               if(!(key_max%m)) {
                   CanBeDivided = true;
                   break;
               }
               key_max-=n;
           }
       }
        if(!CanBeDivided) {
            printf("%d\n",max);
            break;
        }
        max--;
    }
    return 0;
}
