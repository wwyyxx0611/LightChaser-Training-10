#include <stdio.h>

// 用指针交换两个变量的值

void swap(int *p, int *q) {  //用指针定义一个交换值的函数
    int temp = *p;   // 将p的指向值存储
    *p = *q;         // 把 q 指向的值写到 p 指向的位置
    *q = temp;       // 再把存起来的值写到 q 指向的位置
}

int main() {
    int a = 3, b = 8;

    printf("交换前：a = %d, b = %d\n", a, b);

    swap(&a, &b);    // 传的是地址,此时a是3，b是8

    printf("交换后：a = %d, b = %d\n", a, b);  //此时a变成了8，b变成了3
    return 0;
}
