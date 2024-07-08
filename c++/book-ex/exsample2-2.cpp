#include <stdio.h>

int main() {
    int a, b;
    printf("1つ目の数値:");
    scanf_s("%d", &a);
    printf("2つ目の数値:");
    scanf_s("%d", &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d*%d=%d\n", a, b, a * b);
    if (b != 0) {
         printf("%d/%d=%d余り%d\n", a, b, a / b,a % b);
    }
    else {
        printf("0を割ることはできません");
    }
    
   
    return 0;
}