#include <stdio.h>

int main() {
    int i=0;
    while (1) {
        printf("正の整数を入力してください");
        scanf_s("%d", &i);
        if (i > 0) {
            printf("%d\n", i);
        }
        else {
            printf("正の整数ではありません\n");
            break;
        }
    }
    return 0;
}