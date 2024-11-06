#include <stdio.h>
int main() {
    int p, q, r;
    scanf("%d %d %d", &p, &q, &r);
    int P1 = p % 10, P2 = p / 10, Q1 = q % 10, Q2 = q / 10, R1 = r % 10, R2 = r / 10;
    int arr[]={P1, P2, Q1, Q2, R1, R2};
    int max = P1;
    for(int i = 0; i<6 ; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int B = max+1;
    while(B<=40) {
        if((P1+P2*B)*(Q1+Q2*B)==(R1+R2*B)) {
            printf("%d",B);
            return 0;
        }
        B++;
    }
    printf("0");
    return 0;
}
