#include <stdio.h>

int main() {
    double a, b;      // 用 double 才能保留小数结果
    char op;          // 存放运算符 + - * /

    // 1. 提示用户输入
    printf("请输入表达式（例如 3 + 5）：");

    // 2. 读取：数字、运算符、数字
    //    %lf 读 double，%c 读字符
    //    注意 "%c" 前加一个空格，跳过中间的空格
    scanf("%lf %c %lf", &a, &op, &b);

    // 3. 根据运算符计算结果
    if (op == '+') {
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    }
    else if (op == '-') {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }
    else if (op == '*') {
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    }
    else if (op == '/') {
        // 除法要单独判断除数是否为 0
        if (b == 0) {
            printf("错误：除数不能为 0！\n");
        } else {
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        }
    }
    else {
        // 输入的运算符不是 + - * / 中的任何一个
        printf("错误：不支持的运算符 '%c'\n", op);
    }

    return 0;
}