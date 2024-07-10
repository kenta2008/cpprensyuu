#include <stdio.h>

int main() {
    int a;
    printf("負の値で、ループから抜けます");
    
    while (1) {
        printf("数値を入力:");
        scanf_s("%d", &a);
        if (a < 0) {
            break;
        }
    }
    printf("終了");
    return 0;
}