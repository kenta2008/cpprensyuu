#include <stdio.h>

int main() {
    int num1, num2;
    printf("１つ目の数字：");
    scanf_s("%d", &num1);
    printf("２つ目の数を入力：");
    scanf_s("%d", &num2);
    if (num1 > 0) {
        if (num2 > 0) {
            printf("どちらとも正の数です。");
        }
        else {
            printf("１、２つ目の数字のどちらかが正の数ではありません");
        }
    }
    else {
        printf("１、２つ目の数字のどちらかが正の数ではありません");
    }
    
    return 0;
}