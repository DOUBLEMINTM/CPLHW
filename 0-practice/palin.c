#include <stdio.h>
int main() {
    int len;
    char str[1005];
    scanf("%d %s",&len,str);
    //lower
    int count[52]={0};
    for(int i=97;i<=122;i++) {
        //each one
        for(int j=0;j<len;j++) {
            //lower or upper
            if(str[j]==i) {
                count[str[j]-97]++;
            }else if(str[j]==i-32) {
                count[str[j]-39]++;
            }
        }
    }
    int max=0;
    for(int i=0;i<52;i++) {
        max=max>=count[i]?max:count[i];
    }
    int kmax=max;
    for(int j=0;j<kmax;j++) {
        for(int i=0;i<26;i++) {
            if(count[i]>0&&count[i+26]==0) {
                    if(count[i]<max)
                        printf("  ");
                    else
                        printf("= ");
                }
            if(count[i]>0&&count[i+26]>0) {
                 if(count[i]<max)
                     printf(" ");
                 else
                     printf("=");
                if(count[i+26]<max)
                    printf("  ");
                else printf("= ");
            }
            if(count[i]==0&&count[i+26]>0){
                if(count[i+26]<max)
                    printf("  ");
                else printf("= ");
            }
        }
        max--;
        printf("\n");
    }
    //print ------
    int m=0,n=0,repeated=0;
    for(int i=0;i<26;i++) {
        if(count[i]) {
            n++;
        }
        if(count[i+26]) {
            m++;
        }
        if(count[i+26]>0&&count[i]>0) {
            repeated++;
        }
    }
    int total=2*(m+n-1)-repeated+1;
    for(int i=0;i<total;i++) {
        printf("-");
    }
    printf("\n");
    //printf alphabet
    for(int i=0;i<26;i++) {
        if(count[i]>0&&count[i+26]==0) {
            printf("%c ",i+97);
        }else if(count[i]==0&&count[i+26]>0) {
            printf("%c ",i+65);
        }else if(count[i]>0&&count[i+26]>0) {
            printf("%c%c ",i+97,i+65);
        }
    }
    return 0;
}