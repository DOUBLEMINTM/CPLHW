//
// Created by Zeto on 24-10-6.
//
#include <stdio.h>
int main() {
   char s[100];
    int i=0;
    do {
        scanf("%c",&s[i]);
        ++i;
    }while(s[i]=='t');
    for(int j=0;s[j]!=0;j++) {
        printf("%c",s[j]);
    }
        return 0;
}