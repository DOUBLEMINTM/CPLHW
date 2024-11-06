//水龙的无敌数独代码，ans中的九个数，第i个同时记录第i行第i列第i格的信息，
//并把123456789的信息以01比特的方式压入到一个int之中，如果第i行第i列第i格是合法的，
//那么他应该是0x7ffffff
#include <stdio.h>
int main() {
    long long ans[20] = {0}, x, i, j, flag = 0;
    for (i = 0; i <= 8; i++)
        for (j = 0; j <= 8; j++) {
            scanf("%d", &x);
            ans[i / 3 * 3 + j / 3] |= 1 << (x + 17);
            ans[i] |= 1 << (x - 1);
            ans[j] |= 1 << (x + 8);
        }
    for (i = 0; i <= 8; i++)
        if (ans[i] != 0x7ffffff)
            flag = 1;
    printf("%s", flag ? "NO" : "YES");
    return 0;
}