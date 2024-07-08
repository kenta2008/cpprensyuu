#include <stdio.h>

int main() {
    int a, b;//変数
    printf("一つ目の数：");
    scanf_s("%d",&a);
    printf("二つ目の数：");
    scanf_s("%d", &b);
    //正の数か判定
    if (a > 0 || b > 0) {
        printf("どちらかが正の数です。\n");
    }

    else {
        printf("どちらとも正の数ではありません。");
    }
    return 0;
}
