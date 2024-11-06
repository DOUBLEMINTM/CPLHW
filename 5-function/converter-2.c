#include <stdio.h>
#include <limits.h>

static char *ones[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

static char *tens[] = {
    "0", "1", "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy", "eighty", "ninety"};

void ThreeDigits(int num) {
    int hundred = num / 100, ten = num / 10 % 10, one = num % 10;

    if (hundred) {
        printf("%s hundred", ones[hundred]);
        if (ten || one) printf(" and ");
    }

    if (ten >= 2) {
        printf("%s", tens[ten]);
        if (one) printf("-%s", ones[one]);
    } else if (num%100!=0) {
        printf("%s", ones[num%100]);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("zero");
    } else if (num == INT_MIN) {
        printf("minus two billion one hundred and forty-seven million four hundred and eighty-three thousand "
               "six hundred and forty-eight");
    } else {
        if (num < 0) {
            printf("minus ");
            num = -num;
        }

        if (num <= 999) {
            ThreeDigits(num);
        } else if (num <= 999999) {
            ThreeDigits(num / 1000);
            printf(" thousand ");
            ThreeDigits(num % 1000);
        } else if (num <= 999999999) {
            ThreeDigits(num / 1000000);
            printf(" million ");
            ThreeDigits(num / 1000 % 1000);
            if(num / 1000 % 1000 != 0){
                printf(" thousand ");
            }
            ThreeDigits(num % 1000);
        } else {
            ThreeDigits(num / 1000000000);
            printf(" billion ");
            ThreeDigits(num / 1000000 % 1000);
            if(num / 1000000 % 1000!=0) {
                printf(" million ");
            }
            ThreeDigits(num / 1000 % 1000);
            if(num / 1000 % 1000 !=0) {
                printf(" thousand ");
            }
            ThreeDigits(num % 1000);
        }
    }
    return 0;
}
