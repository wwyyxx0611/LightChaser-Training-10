#include <stdio.h>

// 用一个结构体存姓名和分数
struct Student {
    char name[32];
    int score;
};

int main() {
    // 成绩单里的几个学生
    struct Student students[3] = {
        {"小明", 88},
        {"小红", 95},
        {"小刚", 72},
    };
    int count = 3;

    printf("===== 成绩单 =====\n");
    printf("%-10s %s\n", "姓名", "分数");

    int total = 0;
    for (int i = 0; i < count; i++) {
        printf("%-10s %d\n", students[i].name, students[i].score);
        total += students[i].score;
    }

    printf("------------------\n");
    printf("平均分：%.2f\n", (double)total / count);

    return 0;
}
