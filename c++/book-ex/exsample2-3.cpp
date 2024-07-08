#include <stdio.h>

int main() {
    int month;
    printf("月(1~12)の値を入力してください:");
    scanf_s("%d", &month);
    if (month == 12 ||month == 1 || month == 2) {
        printf("冬です");
    }
    else if (month == 3 || month == 4 || month == 5) {
        printf("春です");
    }
    else if (month == 6|| month == 7|| month == 8) {
        printf("夏です");
    }
    else if (month == 9|| month == 10|| month == 11) {
        printf("秋です");
    }
    else {
        printf("不適切な値です");
    }
    return 0;
}