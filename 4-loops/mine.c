#include <stdio.h>
#define size 505
#define MAX 125000
//
//llk
//
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int map[size][size]={0};
    // find I1,J1,I2,J2;
    int count[MAX]={0};
    int arra[MAX][2]={0};
    int arrb[MAX][2]={0};
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            scanf("%d",&map[i][j]);
            int pattern = map[i][j]-1;
            count[pattern]++;
            if(count[pattern]==1) {
                arra[pattern][0]=i;
                arra[pattern][1]=j;
            }else if(count[pattern]==2){
                arrb[pattern][0]=i;
                arrb[pattern][1]=j;
            }
        }
    }


    for(int tag=0;tag<m*n/2;tag++){
        int I1=arra[tag][0],J1=arra[tag][1];
        int I2=arrb[tag][0],J2=arrb[tag][1];
        int first_direction[4]={1,1,1,1};
        int second_direction[4]={1,1,1,1};
        //for the first one
        //north
        for(int i=I1-1;i>=1;i--) {
            if(map[i][J1]>0) {
                first_direction[0]=0;
                break;
            }
        }
        //west
        for(int j=J1-1;j>=1;j--) {
            if(map[I1][j]>0) {
                first_direction[1]=0;
                break;
            }
        }
        //south
        for(int i=I1+1;i<=n;i++) {
            if(map[i][J1]>0) {
                first_direction[2]=0;
                break;
            }
        }
        //east
        for(int j=J1+1;j<=m;j++) {
            if(map[I1][j]>0) {
                first_direction[3]=0;
                break;
            }
        }
        //for the second one
        //north
        for(int i=I2-1;i>=1;i--) {
            if(map[i][J2]>0) {
                second_direction[0]=0;
                break;
            }
        }
        //west
        for(int j=J2-1;j>=1;j--) {
            if(map[I2][j]>0) {
                second_direction[1]=0;
                break;
            }
        }
        //south
        for(int i=I2+1;i<=n;i++) {
            if(map[i][J2]>0) {
                second_direction[2]=0;
                break;
            }
        }
        //east
        for(int j=J2+1;j<=m;j++) {
            if(map[I2][j]>0) {
                second_direction[3]=0;
                break;
            }
        }
        //this for is for checking the directions
        for(int i=0;i<4;i++) {
            if(first_direction[i]
                &&second_direction[i]) {
                map[I1][J1]=0;
                map[I2][J2]=0;
                printf("%d ",tag+1);
                break;
                }
        }

    }
    return 0;
}
