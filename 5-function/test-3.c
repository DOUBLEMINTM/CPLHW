#include <stdio.h>
#define size 2000

int main(void) {
    int n, k, b, l;
    scanf("%d %d %d %d", &n, &k, &b, &l);

    int life[size] = {0};
    for (int i = 0; i < n; i++) {
        life[i] = l;
    }
    int key_b = b;
    int count = 0;
    int survivor = n;
    int i = 0;
    while (survivor > 1) {
        if (life[i] > 0) {
            count++;
        }
        if (count == k) {
            if (key_b > 0) {
                life[i]--;
                key_b--;
                count = 0;
                if(life[i] == 0) {
                    survivor--;
                }
            } else {
                key_b = b;
                count = 0;
            }
        }

        i = (i + 1) % n;
    }
    for (int j = 0; j < n; j++) {
        if (life[j] > 0) {
            printf("%d", j+1);
            break;
        }
    }
    return 0;
}
