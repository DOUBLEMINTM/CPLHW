//
// Created by Zeto on 24-10-9.
//
#include<stdio.h>
#define SIZE 10001
int main() {
    int arr[SIZE]={0};
    int n,tuo_num=0;
    scanf("%d",&n);
    scanf("%d",&arr[0]);
     int num=arr[0];
    for(int i=1;i<n+1;i++) {
        scanf("%d",&arr[i]);
        if(i>num+tuo_num) {
            tuo_num+=i-num-tuo_num;
        }
        num+=arr[i];
    }
    printf("%d",tuo_num);
    return 0;

}