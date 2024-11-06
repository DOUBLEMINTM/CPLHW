//
// Created by Zeto on 24-10-14.
//
#include<stdio.h>
int main() {
//create life-array,using 0 or 1 to simulate life
    int n,k;
    scanf("%d %d",&n,&k);
    int life_index[2000]={0};
    for(int i=0;i<n;i++) {
        life_index[i]=1;
    }
    int count=0,survivor=n,i=0;
    //kill till only one left
    while(survivor>1) {
            if(life_index[i]==1) {
                count++;
            }
            if(count==k) {
                life_index[i]=0;
                count=0;
                survivor--;
            }
            i=(i+1)%n;
        }
    for(int i=0;i<n;i++) {
        if(life_index[i]==1) {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}
