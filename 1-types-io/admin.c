
//
// Created by Zeto on 24-9-26.
//
#include <math.h>
#include <stdio.h>

int main(void) {
    char first_name[10] ;
    char last_name[10] ;
    //32:magic number
    char gender;

    int birth_year ;
    int birth_month ;
    int birth_day ;

    char weekday[10];

    int c_score;
    int music_score;
    int medicine_score;

    int rank;
    //%s string
    //%c character

    scanf("%9s%9s %c%d-%d-%d%s %d%d%d %*lf%*lf%d",
    first_name,last_name,&gender,
    &birth_year,&birth_month,&birth_day,weekday,
    &c_score,&music_score,&medicine_score,
    &rank);

    double mean =1.0*(c_score+music_score+medicine_score)/3.0;
    double standard_deviation =sqrt((pow(c_score-mean,2)
                                           +pow(music_score-mean,2)
                                           +pow(medicine_score-mean,2))/3);

    printf("%s\t%s\t%c\n%d-%d-%d\t%s\n%d\t%d\t%d\n%f\t%f\t%d%%",
        first_name,last_name,gender,
        birth_year,birth_month,birth_day,weekday,
        c_score,music_score,medicine_score,
        mean,standard_deviation,rank);
    printf("%f",mean);

    return 0;
}