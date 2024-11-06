#include <stdio.h>


int IsPrime(int num);
int main(void) {
    int num=0;
    scanf("%d",&num);
    if(IsPrime(num)) {
        printf("YES\n");
    }else printf("NO\n");
}
int IsPrime(int num) {
    if(num<=1)
        return 0;
    for(int i=2;i*i<=num;i++) {
        if(!(num%i))
            return 0;
    }
    return 1;
}