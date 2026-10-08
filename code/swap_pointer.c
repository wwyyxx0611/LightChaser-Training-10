#include <stdio.h>

// 用指针交换两个变量的值
// 形参是指针，*p / *q 才能真的改到外面的变量
void swap(int *p, int *q) {
    int temp = *p;   // 先把 p 指向的值存起来
    *p = *q;         // 把 q 指向的值写到 p 指向的位置
    *q = temp;       // 再把存起来的值写到 q 指向的位置
}

int main() {
    int a = 3, b = 8;

    printf("交换前：a = %d, b = %d\n", a, b);

    swap(&a, &b);    // 传的是地址

    printf("交换后：a = %d, b = %d\n", a, b);
    return 0;
}
