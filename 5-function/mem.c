#include <stdio.h>
#include <string.h>
int main() {
    int arr[10]={0};
    for(int i=0;i<10;i++) {
        arr[i]=1;
    }
    int sum = 0;
    for(int i=9;i>=0;i--) {
        sum+=arr[i-1]*(i-1>=0);
    }
    printf("%d",sum);
}
