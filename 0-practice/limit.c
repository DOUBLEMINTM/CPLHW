#include <iostream>
#include <cmath>

using namespace std;

long long totalStones;  // 总石子数量
long long halfStones;   // 至少需要的石子数量
long long A_stones;     // A 收集的石子数量
long long B_stones;     // B 收集的石子数量

bool canAWin(long long k) {
    long long remaining = totalStones;
    A_stones = 0;
    B_stones = 0;

    while (remaining > 0) {
        // A 先取走 k 颗石子
        long long A_take = min(k, remaining);
        A_stones += A_take;
        remaining -= A_take;

        // B 再取走 floor(剩余石子数 / 10) 颗石子
        if (remaining > 0) {
            long long B_take = remaining / 10;
            B_stones += B_take;
            remaining -= B_take;
        }
    }

    return A_stones >= halfStones;
}

int main() {
    cin >> totalStones;
    halfStones = (totalStones + 1) / 2;  // 计算至少需要的石子数量

    long long left = 1, right = totalStones;
    long long answer = totalStones;

    // 二分查找最小的 k
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canAWin(mid)) {
            answer = mid;  // 找到一个可行解，尝试更小的 k
            right = mid - 1;
        } else {
            left = mid + 1;  // 不可行，增加 k
        }
    }

    cout << answer << endl;
    return 0;
}
