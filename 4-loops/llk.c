#include <stdio.h>
#include <string.h>
int main() {
    char str_a[1003], str_b[1003];
    while(scanf("%s %s",str_a,str_b)!=EOF) {

        int len_a = strlen(str_a);
        int len_b = strlen(str_b);

        int max = len_a > len_b ? len_a : len_b;
        int total[1003]={0};

        int reverse_a[1003]={0};
        int reverse_b[1003]={0};
        for(int i=0;i<len_a;i++) {
            reverse_a[i] = str_a[len_a-i-1]-'0';
        }
        for(int i=0;i<len_b;i++) {
            reverse_b[i] = str_b[len_b-i-1]-'0';
        }

        for(int i=0;i<max;i++) {
            total[i] = total[i]+ reverse_a[i] + reverse_b[i];
            if(total[i]>9) {
                total[i]%=10;
                total[i+1]++;
            }
        }
        if(total[max]>0) {
            printf("%d",total[max]);
        }
        for(int i=1;i<max+1;i++) {
            printf("%d",total[max-i]);
        }
        printf("\n");
    }
    return 0;
}


