#include <stdio.h>
int CROSS=10000,ROADS=10000;
int main() {
    //CROSS
    //ROADS
   //DANGER
    for(;CROSS <100000;CROSS++) {
        for(;ROADS <100000;ROADS++) {
            int S1=CROSS%10,S2=CROSS/10%10,O1=CROSS/100%10,R1=CROSS/1000%10,
            S3=ROADS%10,D1=ROADS/10%10,A1=ROADS/100%10,O2=ROADS/1000%10,R2=ROADS/10000,
            R3=(ROADS+CROSS)%10,A2=(ROADS+CROSS)/10000%10,D2=(ROADS+CROSS)/100000;
            if(D1==D2&&S1==S2&&S2==S3&&O1==O2&&A1==A2&&R1==R2&&R2==R3)
                printf("%d %d %d\n",CROSS,ROADS,CROSS+ROADS);
        }
    }
    return 0;
}
