#include <stdio.h>

int main() {
    int a,i;
    printf("正の数を入力してください");
    scanf_s("%d", &a);
    if (a > 0) {
        for (i = 1; i <= a; i++) {

            printf("%d", i);
            printf("\n");
        }
        
    }
    else {
        printf("入力した値は不適切です");
    }
    
    return 0;
}