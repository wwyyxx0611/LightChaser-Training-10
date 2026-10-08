#include <stdio.h>
#include <stdlib.h>   // malloc / free 在这里

int main() {
    int n;
    printf("请输入数组长度：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("长度必须大于 0\n");
        return 1;
    }

    // 动态申请 n 个 int 的空间
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {          // 申请失败要判断
        printf("内存申请失败\n");
        return 1;
    }

    // 读入 n 个数并累加
    double sum = 0;
    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个数：", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("平均值 = %.2f\n", sum / n);

    free(arr);      // 用完一定要释放
    arr = NULL;

    return 0;
}
