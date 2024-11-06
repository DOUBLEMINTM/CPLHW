#include <stdio.h>
#include <stdbool.h>
#define size 1000005
int a[size],b[size],min[size],n,m,t;
bool exist = false;
int main() {
    scanf("%d %d %d",&n,&m,&t);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }
    int p =0;
    for(int k = 0; k < m ; k++) {
        int low = 0, high = n-1;
        int count = 1;
        //
        while(low<=high) {
            int mid =(low>>1)+(high>>1)+(low&high&1);
            if(b[k]+a[mid]>t) {
                high = mid - 1;
            }else if(b[k]+a[mid]<=t) {
                exist = true;
                low = mid + 1;
                if(count--){min[p]=t-b[k]-a[mid];}
                if(t-b[k]-a[mid] < min[p]) {
                    min[p] = t-b[k]-a[mid];
                }
            }
        }
        //
       if(count<1) {p++;}
    }
    int MIN = min[0];
    for(int i = 0; i <p;i++) {
        if(min[i]<MIN) MIN = min[i];
    }
    if(exist) {
        printf("%d",MIN);
    }else printf("-1");
    return 0;
}
