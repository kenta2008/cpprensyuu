#include <stdio.h>
int main(void) {
    int a,b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    if (a - b) {
        
        printf("同じ数字が入力されませんでした。");
    }else {
        
        printf("同じ数字は入力されました。");
    }
    
    return 0;
}