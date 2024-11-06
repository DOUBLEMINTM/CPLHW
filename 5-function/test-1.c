#include <stdio.h>
#include <ctype.h>
int main() {
    int len;
    char str[100005];
    scanf("%d",&len);
    scanf("%s",str);
    for(int i = len -1;i>=0; i--) {
        if(str[i]>='A') {
            if(str[i]==tolower(str[i])) {
                printf("%c",toupper(str[i]));
            }
            if(str[i]==toupper(str[i])) {
                printf("%c",tolower(str[i]));
            }
        }else {
            printf("%c",str[i]);
        }
    }
    return 0;
}