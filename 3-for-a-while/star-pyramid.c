//
// Created by Zeto on 24-10-10.
//
#include<stdio.h>

void PrintCharacter(char ch, int count);
void NewLine(void);
//second void means no argument is accepted
int main(void) {
    int lines = 0;
    scanf("%d", &lines);
    for (int i = 0; i < lines; i++) {
        PrintCharacter(' ',lines - 1-i);
        PrintCharacter('*',2*i+1);
        NewLine();
    }
    return 0;
}
void PrintCharacter(char ch, int count) {
    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }
}
void NewLine(void) {
    printf("\n");
}
