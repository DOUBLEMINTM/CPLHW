#include <stdio.h>
#include <string.h>
#define size 1145

int main() {
    int turns = 0;
    scanf("%d", &turns);
    getchar();
    char str[size];
    memset(str, '.', sizeof(str));
    scanf("%s", str);

    int len = strlen(str);
    int line[size] = {0};
    for (int i = 3; i < len + 3; i++) {
        if (str[i - 3] == '.') {
            line[i] = 0;
        } else if (str[i - 3] == 'A') {
            line[i] = 1;
        } else line[i] = 2;
    }

    for (int i = 0; i < turns; i++) {
        int old_line[size] = {0};
        for (int i = 3; i < len + 3; i++) {
            old_line[i] = line[i];
        }
        for (int j = 3; j < len + 3; j++) {
            if (old_line[j] == 0) {
                int count_1 = 0, count_2 = 0;
                for (int k = j - 3; k <= j + 3; k++) {
                    if (old_line[k] == 1)
                        count_1++;
                    if (old_line[k] == 2)
                        count_2++;
                }

                if (count_1 >= 2 && count_1 <= 4 && count_2 == 0) {
                    line[j] = 1;
                } else if (count_2 >= 2 && count_2 <= 4 && count_1 == 0) {
                    line[j] = 2;
                }
            } else {
                int count[3] = {0};
                for (int k = j - 3; k < j; k++) {
                    if (old_line[k] == old_line[j]) {
                        count[old_line[j]]++;
                    } else if (old_line[k] + old_line[j] == 3)
                        count[3 - old_line[j]]++;
                }
                for (int k = j + 1; k <= j + 3; k++) {
                    if (old_line[k] == old_line[j]) {
                        count[old_line[j]]++;
                    } else if (old_line[k] + old_line[j] == 3)
                        count[3 - old_line[j]]++;
                }

                if (count[3 - old_line[j]] > 0 || count[old_line[j]] >= 5 || count[old_line[j]] <= 1) {
                    line[j] = 0;
                }
            }
        }
    }
    for (int i = 3; i < len + 3; i++) {
        if (line[i] == 0) {
            printf(".");
        } else if (line[i] == 1) {
            printf("A");
        } else printf("B");
    }
    return 0;
}
