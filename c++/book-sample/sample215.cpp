#include <stdio.h>

int main() {
    int dice;
    printf("さいころの目(1-6)");
    scanf_s("%d", &dice);
    switch (dice) {
    case 1:
    case 3:
    case 5:
        printf("奇数です。\n");
        break;
    case 2:
    case 4:
    case 6:
        printf("偶数です");
    default:
        printf("範囲外です。\n");
        break;
    }
    return 0;
}