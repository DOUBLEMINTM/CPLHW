//
// Created by Zeto on 24-9-26.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    int max = 100;
    /*
     *set a random number
     */
    srand(time(NULL)); // use current time as seed for random generator
    int Set_Number = rand() % max + 1;
    // printf("Set_Number:%d", Set_Number);

    /*
     *compare the two numbers,and tell the player the result
     */
    int n = 7;
    while (n > 0)
    {
        /*
         *show game rules and input the number
         */
        int Number = 0;
        printf("You have %d chances.\nSelect a number from 1 to 100(integer):", n);
        scanf("%d", &Number);
        if (Number == Set_Number)
        {
            printf("You Win!");
            break;
        }
        else if (Number > Set_Number)
        {
            printf("Too high!");
        }
        else if (Number < Set_Number)
        {
            printf("Too low!");
        }
        n--;
    }

    return 0;
}
