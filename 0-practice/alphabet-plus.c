
#include <stdio.h>
#define size 205
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    char line[size];
    scanf("%s",line);
    int map[size][size]={0};
    for(int j=1;j<=n;j++) {
        map[0][j]=line[j-1]-'0';
    }
    for(int i=1;i<m;i++) {
        for(int j=1;j<=n;j++) {
           if(map[i-1][j-1]==1) {
               if(map[i-1][j]==1) {
                   if(map[i-1][j+1]==1) {
                       map[i][j]=0;
                   }else {
                       map[i][j]=1;
                   }
               }else {
                   if(map[i-1][j+1]==1) {
                       map[i][j]=1;
                   }else {
                       map[i][j]=0;
                   }
               }
           }else {
               if(map[i-1][j]==1) {
                       map[i][j]=1;
               }else {
                   if(map[i-1][j+1]==1) {
                       map[i][j]=1;
                   }else {
                       map[i][j]=0;
                   }
               }
           }
        }
    }

    for(int i=1;i<m;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d",map[i][j]);
        }
        printf("\n");
    }
}