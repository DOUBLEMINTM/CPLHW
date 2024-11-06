#include <stdio.h>
#include <math.h>

int IsPrime(int x) {
    int flag = 1;
    for (int i = 2; i <= sqrt(x + 0.5); i++) {
        if (x % i == 0) {
            flag = 0;
        }
    }
    return flag;
}
int ReverseX(int x) {
    int reversed = 0;
    while(x>0) {
        reversed = reversed*10 + x%10;
        x = x/10;
    }
    return reversed;
}
int main(void) {
    int n=0;
    scanf("%d",&n);
      int count = 0;
    for(int x=2;x<=n;x++) {
        if(IsPrime(x)&&IsPrime(ReverseX(x))) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}