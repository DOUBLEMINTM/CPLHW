//
// Created by Zeto on 24-10-7.
//
#include<stdio.h>
    int main() {
        int n;
        scanf("%d",&n);
        switch(n){
            case 0:printf("zero");break;
            case 1:printf("one");break;
            case 2:printf("two");break;
            case 3:printf("three");break;
            case 4:printf("four");break;
            case 5:printf("five");break;
            case 6:printf("six");break;
            case 7:printf("seven");break;
            case 8:printf("eight");break;
            case 9:printf("nine");break;
            case 10:printf("ten");break;
            case 11:printf("eleven");break;
            case 12:printf("twelve");break;
            case 13:printf("thirteen");break;
            case 14:printf("fourteen");break;
            case 15:printf("fifteen");break;
            case 16:printf("sixteen");break;
            case 17:printf("seventeen");break;
            case 18:printf("eighteen");break;
            case 19:printf("nineteen");break;
        }
        if (n>=100) {
            switch(n/100) {
                case 1:printf("one hundred");break;
                case 2:printf("two hundred");break;
                case 3:printf("three hundred");break;
                case 4:printf("four hundred");break;
                case 5:printf("five hundred");break;
                case 6:printf("six hundred");break;
                case 7:printf("seven hundred");break;
                case 8:printf("eight hundred");break;
                case 9:printf("nine hundred");break;
            }
            switch(n%100) {
                case 1:printf(" and one");break;
                case 2:printf(" and two");break;
                case 3:printf(" and three");break;
                case 4:printf(" and four");break;
                case 5:printf(" and five");break;
                case 6:printf(" and six");break;
                case 7:printf(" and seven");break;
                case 8:printf(" and eight");break;
                case 9:printf(" and nine");break;
                case 10:printf(" and ten");break;
                case 11:printf(" and eleven");break;
                case 12:printf(" and twelve");break;
                case 13:printf(" and thirteen");break;
                case 14:printf(" and fourteen");break;
                case 15:printf(" and fifteen");break;
                case 16:printf(" and sixteen");break;
                case 17:printf(" and seventeen");break;
                case 18:printf(" and eighteen");break;
                case 19:printf(" and nineteen");break;
            }
            if(n>=120) {
                switch(n%100/10) {
                    case 2:printf(" and twenty");break;
                    case 3:printf(" and thirty");break;
                    case 4:printf(" and forty");break;
                    case 5:printf(" and fifty");break;
                    case 6:printf(" and sixty");break;
                    case 7:printf(" and seventy");break;
                    case 8:printf(" and eighty");break;
                    case 9:printf(" and ninety");break;
                }
                if(n%100/10!=0) {
                    switch(n%10) {
                        case 1:printf("-one");break;
                        case 2:printf("-two");break;
                        case 3:printf("-three");break;
                        case 4:printf("-four");break;
                        case 5:printf("-five");break;
                        case 6:printf("-six");break;
                        case 7:printf("-seven");break;
                        case 8:printf("-eight");break;
                        case 9:printf("-nine");break;
                    }
                }
            }
        }
        if(n>=20&&n<100){
            switch(n%100/10) {
                case 2:printf("twenty");break;
                case 3:printf("thirty");break;
                case 4:printf("forty");break;
                case 5:printf("fifty");break;
                case 6:printf("sixty");break;
                case 7:printf("seventy");break;
                case 8:printf("eighty");break;
                case 9:printf("ninety");break;
            }
            switch(n%10) {
                case 1:printf("-one");break;
                case 2:printf("-two");break;
                case 3:printf("-three");break;
                case 4:printf("-four");break;
                case 5:printf("-five");break;
                case 6:printf("-six");break;
                case 7:printf("-seven");break;
                case 8:printf("-eight");break;
                case 9:printf("-nine");break;
            }
        }
    return 0;
    }