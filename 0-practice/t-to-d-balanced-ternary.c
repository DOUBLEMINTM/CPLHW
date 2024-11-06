#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//d to t actually
int n; // 开在全局变量中会自动初始化为 0
int main(void) {
  scanf("%d", &n);
  while (n--) { // 使用这种简易写法，读入 n 组数据（因为 n 在过程中并不重要，当 n 减为 0 时循环自动结束）
    char dec[26] = ""; // 由于输入中可能有 'Z'，所以不得不用字符串，记得字符串数组要多开几位，并且初始化
    scanf("%s", dec); // 并不需要使用 getchar() 来读入换行符，也不要用 gets() 之类的函数
    char ter[20] = ""; // 用于储存最终的平衡三进制字符串，记得字符串数组要多开几位，并且初始化
    int len = strlen(dec);
    bool flag = true; // 使用 bool 值（其实就是 1 和 0）来标记是否出现了非法字符
    for (int i = 0; i < len; i++) { // 从左到右遍历字符串，先进行合法性检查
      if (dec[i] == 'Z') {
        printf("Radix Error\n"); // 注意错误信息后面要带有换行符
        flag = false; // 出现了非法字符，标记为 false
        break; // 跳出循环，并非直接结束程序
      }
    }
    if (!flag) { // 如果出现了非法字符，就直接跳过这一组数据，不进行下面的转换操作
      continue;
    }
    int decnum = atoi(dec); // 使用 atoi 函数将合法的数字字符串转化为整数（int 型）
    bool neg = decnum < 0; // 记录 decnum 是否为负数
    decnum = abs(decnum); // 取绝对值，即提出负号，这里不该为了负数写两个巨大的 if-else 分支，而是应该提取出来后当作正数处理
    if (decnum == 0) { // 由于后续转换算法的特别之处，需要提前特判 0，这里是要自己造样例试了才知道需要特判的
      printf("0\n"); // 注意输出后面要带有换行符
      continue; // 跳过下面的转换操作，并非直接结束程序
    }
    int i = 0; // 将循环的标记位放在循环外面，这样在循环结束后，i 的值就是最终的字符串长度
    for (; decnum > 0; i++, decnum /= 3) { // 每一轮循环后都会执行两步
      ter[i] = decnum % 3 + '0'; // 从右到左，每次取余数，然后加上字符 '0' 的大小，注意这里的 ter 字符串是倒置的
    }
    ter[i++] = '0'; // ter 字符串是倒置的，所以在结尾补上一个 '0'，用于可能存在的进位，这里的 i++ 是为了让 i 的值变成最终的字符串长度
    ter[i] = '\0'; // 字符串结尾要加上 '\0'，表示字符串结束，否则会出现奇奇怪怪的问题，如乱码
    for (int j = 0; j < i; j++) { // 从左到右遍历倒置的三进制字符串，进行三进制到平衡三进制的转换操作，可能需要进位
      switch (ter[j]) { // 使用 switch-case 语句进行转换，注意这里的 ter 字符串是倒置的三进制
        case '0':
        case '1':
          continue; // 如果是 '0' 或 '1'，则不需要转换与进位，直接跳过本次循环
        case '2':
          ter[j] = 'Z'; // 如果是 '2'，则转换为 'Z'，并且进位
          break;
        case '3':
          ter[j] = '0'; // 如果是 '3'，则转换为 '0'，并且进位
          break;
        default:
          assert(false); // switch-case 标准写法，要带上 default，否则不规范
      }
      ter[j + 1]++; // 在转换操作结束后，进行进位操作，注意这里的 ter 字符串是倒置的三进制
    }
    // 到此为止，绝对值的平衡三进制已经转换完毕，接下来需要处理负数的情况，并且直接输出
    for (int j = i - 1; j >= 0; j--) {
      if (j == i - 1 && ter[j] == '0') { // 由于在 ter 字符串的末尾补了一个 0，如果进位没改变这个 0，就不要输出它
        continue;
      } else if (neg && ter[j] == 'Z') { // 如果是负数，就将 Z 转换为 1
        printf("1");
      } else if (neg && ter[j] == '1') { // 如果是负数，就将 1 转换为 Z
        printf("Z");
      } else {
        printf("%c", ter[j]); // 如果是其他情况（正数、负数下为 0 的位），就直接输出
      }
    }
    printf("\n"); // 注意输出后面要带有换行符
  }
}