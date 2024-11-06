#include<stdio.h>
#include<stdbool.h>
int main() {
    int len,N;
    scanf("%d %d",&len,&N);
    char str[len];
    scanf("%s",str);
    _Bool is_valid = true;
    for(int i=0;i<len;i++) {
        int I=str[i]-'0';
        if(I>N-1&&str[i]<65) {
            is_valid = false;
            printf("Error");
            break;
        }
        if(str[i]=='A'||str[i]=='B'||str[i]=='C'||str[i]=='D'||str[i]=='E'||str[i]=='F') {
            int NI=str[i]-55;
            if(NI>N-1) {
                is_valid = false;
                printf("Error");
                break;
            }
        }
    if(str[i]>70) {
        is_valid = false;
        printf("Error");
        break;
    }
    }
    int sum=0,pow=1;
    if(is_valid) {
        for(int j=len-1;j>=0;j--) {
            if(str[j]=='A') {
                sum=sum+10*pow;
            }else if(str[j]=='B') {
                sum=sum+11*pow;
            }else if(str[j]=='C') {
                sum=sum+12*pow;
            }else if(str[j]=='D') {
                sum=sum+13*pow;
            }else if(str[j]=='E') {
                sum=sum+14*pow;
            }else if(str[j]=='F') {
                sum=sum+15*pow;
            }else
                sum=sum+(str[j]-'0')*pow;
            pow*=N;
        }
        printf("%d",sum);
    }
    return 0;
}

