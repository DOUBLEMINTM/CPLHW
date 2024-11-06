#include <stdio.h>

const int N = 3005;

//this is an extension of josephus-ring problem
//we use circular-linked-list to solve this problem
//create next[] and pre[] the two pointers to simulate the ring
int main() {
    int n, k, b, l;
    scanf("%d%d%d%d", &n, &k, &b, &l);

    //Core of the set of the pointers
    //i   1 2 3 ... n-1 n
    //nex 2 3 4 ... n   1
    //pre n 1 2 ... n-2 n-1
    int pre[N], next[N];
    for (int i = 1; i <= n; ++i) {
        pre[i] = i - 1;
        next[i] = i + 1;
    }
    pre[1] = n;
    next[n] = 1;

    int life[N];
    for (int i = 1; i <= n; ++i) {
        life[i] = l;
    }

    int alive = n, cur = 1, cnt = 0, bullets = b;
    //cur: current number
    while (alive > 1) {
        if (++cnt == k) {
            cnt = 0;
            if (bullets > 0) {
                bullets--;
                if (--life[cur] == 0) {
                    alive--;
                    //
                    //MOST IMPORTANT PART
                    //kick this CUR for it has been killed
                    //but reflect on the pointers
                    next[pre[cur]] = next[cur];
                    pre[next[cur]] = pre[cur];
                }
            } else {
                bullets = b;
            }
        }

        cur = next[cur];
    }

    for (int i = 1; i <= n; ++i) {
        if (life[i] > 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}