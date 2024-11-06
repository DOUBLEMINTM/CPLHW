//
// Created by Zeto on 24-10-6.
//
 #include <stdio.h>
int main() {
 int a=0,b=0;
 scanf("%d %d",&a,&b);
 int min=0;

  min = a>=b?b:a;
 printf("%d",min);
 return 0;
}