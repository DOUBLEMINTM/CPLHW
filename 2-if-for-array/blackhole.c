//
// Created by Zeto on 24-10-9.
//
#include <stdio.h>
int main() {
    int arr[1000]={0};
    int sum=0;
    scanf("%d",&arr[0]);
    for(int i=0;arr[i]!=495&&i<999;i++) {
        int a,b,c;
        a=arr[i]/100;
        b=arr[i]%100/10;
        c=arr[i]%10;
        int new_arr[6]={0};
        new_arr[0]=100*a+10*b+c;
        new_arr[1]=100*a+10*c+b;
        new_arr[2]=100*b+10*a+c;
        new_arr[3]=100*b+10*c+a;
        new_arr[4]=100*c+10*a+b;
        new_arr[5]=100*c+10*b+a;
        int max=new_arr[0],min=new_arr[0];
        for(int j=0;j<6;j++) {
            if(new_arr[j]>max) {
                max=new_arr[j];
            }
            if(new_arr[j]<min) {
                min=new_arr[j];
            }
        }
        arr[i+1]=max-min;
        if(arr[i]>arr[i+1]) {
            sum+=arr[i]-arr[i+1];
        }
    }
    printf("%d",sum);
    return 0;
    }