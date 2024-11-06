//
// Created by Zeto on 24-10-8.
//
#include <stdio.h>
int main() {
    int arr[1002];
    int n=1;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++) {
       scanf("%d",&arr[i]);
    }
    int count[1002]={0};
    for(int j=0;j<2*n-1;j++) {
        count[arr[j]]++;
    }
    for(int i=0;i<2*n-1;i++) {
        if(count[arr[i]]==1) {
            printf("%d",arr[i]);
        }
    }
    return 0;
}