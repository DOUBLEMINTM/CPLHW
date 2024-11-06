#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++) {
        _Bool is_num=true;
        _Bool is_positive=true;
        char str[1000000];
        scanf("%s",str);
        getchar();
        int len = strlen(str);
        for(int j=0; j<len; j++) {
            if(str[j]=='Z') {
                is_num=false;
                printf("Radix Error\n");
                break;
            }
        }
        if(is_num) {
            //decimalism to ternary
            int num=atoi(str),j=0;
            int arr[1000]={0};
            if(num==0) {
                printf("0");
            }
            if(num<0) {
                num=0-num;
                is_positive=false;
            }
            while(num>0) {
                arr[j]=num%3;
                num=num/3;
                j++;
            }
            for(int k=0; k<j+1; k++) {
                arr[k]=(char)(arr[k]+'0');
            }
            for(int k=0; k<j; k++) {
                if(arr[k]=='2') {
                    arr[k]='Z';
                    arr[k+1]=(char)((arr[k+1]-'0')+1+'0');
                }
                if(arr[k]=='3') {
                    arr[k]='0';
                    arr[k+1]=(char)((arr[k+1]-'0')+1+'0');
                }
            }
            if(is_positive) {
                if(arr[j]=='1')
                    printf("1");
                for(int k=j-1; k>=0; k--) {
                    printf("%c",arr[k]);
                }
                printf("\n");
            }else {
                for(int k=j-1; k>=0; k--) {
                    if(arr[k]=='1') {
                        arr[k]='Z';
                    }else if(arr[k]=='Z') {
                        arr[k]='1';
                    }
                }
                if(arr[j]=='1') {
                    printf("Z");
                }
                for(int k=j-1; k>=0; k--) {
                    printf("%c",arr[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}

