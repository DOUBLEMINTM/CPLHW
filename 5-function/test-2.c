#include <stdio.h>
#define size 35

int main(void) {
    int t, x;
    scanf("%d %d", &t, &x);
    for (int k = 0; k < t; k++) {
        int map[size][size] = {0};
        int SIZE;
        scanf("%d", &SIZE);
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                scanf("%d", &map[10+i][10+j]);
            }
        }
        int winner[5] = {0};
        //check rows
        if(x!=1) {
            for (int i = 0; i < SIZE; i++) {
                int count = 1;
                for (int j = 0; j < SIZE; j++) {
                    if ((map[10+i][10+j] & map[10+i][10+j + 1]) > 0) {
                        count++;
                        if (count == x) {
                            winner[map[10+i][10+j]]++;
                        }
                    } else {
                        count = 1;
                    }
                }
            }

            //check cols
            for (int j = 0; j < SIZE; j++) {
                int count = 1;
                for (int i = 0; i  < SIZE; i++) {
                    if ((map[10+i][10+j] & map[10+i + 1][10+j]) > 0) {
                        count++;
                        if (count == x) {
                            winner[map[10+i][10+j]]++;
                        }
                    } else {
                        count = 1;
                    }
                }
            }

            //check diagonal
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    int count = 1;
                    for (int k = 0; k < SIZE; k++) {
                        if((map[10+i+k][10+j+k] & map[10+i+k+1][10+j+k+1])>0) {
                            count++;
                            if (count == x) {
                                winner[map[10+i+k][10+j+k]]++;
                            }
                        }else {
                            count = 1;
                        }
                    }
                }
            }

            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    int count = 1;
                    for (int k = 0; k < SIZE; k++) {
                        if((map[10+i+k][10+j-k] & map[10+i+k+1][10+j-k-1])>0) {
                            count++;
                            if (count == x) {
                                winner[map[10+i+k][10+j-k]]++;
                            }
                        }else {
                            count = 1;
                        }
                    }
                }
            }
        }else {
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    if(map[10+i][10+j]==1) {
                        winner[1]++;
                    }else if(map[10+i][10+j]==2) {
                        winner[2]++;
                    }else if(map[10+i][10+j]==4) {
                        winner[4]++;
                    }
                }
            }
        }
            //print
            if (winner[1] && !winner[2] && !winner[4]) {
                printf("1\n");
            } else if (!winner[1] && winner[2] && !winner[4] ) {
                printf("2\n");
            } else if (!winner[1] && !winner[2] && winner[4] ) {
                printf("4\n");
            } else printf("draw\n");

    }
    return 0;
}
