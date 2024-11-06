#include <stdio.h>

int main(void) {
    int x_A, x_B, y_A, y_B, x_C, y_C;
    scanf("%d %d %d %d %d %d", &x_A, &y_A, &x_B, &y_B, &x_C, &y_C);
    int is_blocked = 0;
    int D_X = (x_B - x_A>=0)?(x_B -x_A):(x_A-x_B), D_Y =(y_B-y_A>=0)?(y_B-y_A):(y_A-y_B);
    int dist = D_X + D_Y;
    if (x_A - x_B == 0) {
        if ((y_B - y_A) * (y_C - y_A) > 0 && ((y_B-y_A>=0)?(y_B-y_A):(y_A-y_B)) > ((y_C-y_A>=0)?(y_C-y_A):(y_A-y_C))) {
            is_blocked = 2;
            printf("%d\n", dist + is_blocked);
            printf("R");
            if (y_B - y_A > 0) {
                for (int i = 0; i < dist; i++) {
                    printf("U");
                }
            } else {
                for (int i = 0; i < dist; i++) {
                    printf("D");
                }
            }
            printf("L");
        } else {
            printf("%d\n", dist);
            if (y_B - y_A > 0) {
                for (int i = 0; i < dist; i++) {
                    printf("U");
                }
            } else {
                for (int i = 0; i < dist; i++) {
                    printf("D");
                }
            }
        }
    } else if (y_A - y_B == 0) {
        if ((x_B - x_A) * (x_C - x_A) > 0 && ((x_B - x_A>=0)?(x_B -x_A):(x_A-x_B)) > ((x_C - x_A>=0)?(x_C-x_A):(x_A-x_C))) {
            is_blocked = 2;
            printf("%d\n", dist + is_blocked);
            printf("U");
            if (x_B - x_A > 0) {
                for (int i = 0; i < dist; i++) {
                    printf("R");
                }
            } else {
                for (int i = 0; i < dist; i++) {
                    printf("L");
                }
            }
            printf("D");
        } else {
            printf("%d\n", dist);
            if (x_B - x_A > 0) {
                for (int i = 0; i < dist; i++) {
                    printf("R");
                }
            } else {
                for (int i = 0; i < dist; i++) {
                    printf("L");
                }
            }
        }
    } else {
        printf("%d\n", dist);
        if (x_B > x_A && y_B > y_A) {
            if ((x_A < x_C && x_C <= x_B && y_A == y_C) ||
                (y_A <= y_C && y_C < y_B && x_B == x_C)) {
                for (int i = 0; i < y_B - y_A; i++) {
                    printf("U");
                }
                for (int i = 0; i < x_B - x_A; i++) {
                    printf("R");
                }
                } else {
                    for (int i = 0; i < x_B - x_A; i++) {
                        printf("R");
                    }
                    for (int i = 0; i < y_B - y_A; i++) {
                        printf("U");
                    }
                }
        } else if (x_B > x_A && y_B < y_A) {
            if ((x_A < x_C && x_C <= x_B && y_A == y_C) ||
                (y_B <= y_C && y_C < y_A && x_B == x_C)) {
                for (int i = 0; i < y_A - y_B; i++) {
                    printf("D");
                }
                for (int i = 0; i < x_B - x_A; i++) {
                    printf("R");
                }
                } else {
                    for (int i = 0; i < x_B - x_A; i++) {
                        printf("R");
                    }
                    for (int i = 0; i < y_A - y_B; i++) {
                        printf("D");
                    }
                }
        } else if (x_B < x_A && y_B > y_A) {
            if ((x_B <= x_C && x_C <= x_A && y_A == y_C) ||
                (y_A <= y_C && y_C <= y_B && x_B == x_C)) {
                for (int i = 0; i < y_B - y_A; i++) {
                    printf("U");
                }
                for (int i = 0; i < x_A - x_B; i++) {
                    printf("L");
                }
                } else {
                    for (int i = 0; i < x_A - x_B; i++) {
                        printf("L");
                    }
                    for (int i = 0; i < y_B - y_A; i++) {
                        printf("U");
                    }
                }
        } else if(x_B < x_A && y_B < y_A) {
            if ((x_B <= x_C && x_C <= x_A && y_A == y_C) ||
                (y_B<= y_C && y_C <= y_A && x_C == x_B)) {
                for (int i = 0; i < y_A - y_B; i++) {
                    printf("D");
                }
                for (int i = 0; i < x_A - x_B; i++) {
                    printf("L");
                }
                }else {
                    for (int i = 0; i < x_A - x_B; i++) {
                        printf("L");
                    }
                    for (int i = 0; i < y_A - y_B; i++) {
                        printf("D");
                    }
                }
        }
    }
        return 0;
    }
