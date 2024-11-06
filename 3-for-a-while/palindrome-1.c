#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LEN 100
 char str[LEN]="";

bool IsPalindrome(const char str[]);

int main(){
   scanf("%s",str);
   IsPalindrome(str);
   return 0;

}
bool IsPalindrome(const char str[]) {
   for(int i=0;i<strlen(str);i++) {
      if(str[i]!=str[strlen(str)-i-1]) {
         printf("NO!\n");
         return false;
      }
   }
   printf("YES!\n");
   return true;
}
