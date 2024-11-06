#include <stdio.h>
#define size 2005
int n,arr[size];
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int m=1;
    for(int i = n-1; i>=1; i--) {
        if(arr[i]>arr[i-1]) break;
        else m++;
    }
    int i = n-m,count=1,min=0,index=0;
    for(;i<n;i++) {
        if(arr[i]>arr[n-1-m]) {
           if(count--){min=arr[i];index=i;}
            if(min>arr[i]) {
                min=arr[i];index=i;
            }
        }
    }
    arr[index]^=arr[n-1-m]^=arr[index]^=arr[n-1-m];
    for(int i=0;i<n-m;i++) {
        printf("%d ",arr[i]);
    }
    for(int i=n-1;i>=n-m;i--) {
        printf("%d ",arr[i]);
    }
    return 0;
}
