#include <stdio.h>

int main() {
    int sum = 0;

    // 从 1 开始每次加 2，i 就只会取到奇数
    for (int i = 1; i <= 100; i += 2) {
        sum += i;  //+=可以理解为sum=sum+i
    }

    printf("1~100 的奇数和 = %d\n", sum);   // 结果应为 2500
    return 0;
}
