#include <stdio.h>
int main(void) {
    
    double b, sum;
    int a, i;
    sum = 0;
   
    printf("平均を求めたい人数を入力してください\n→");
    
    scanf_s("%d", &a);
    for (i = 1; i <= a; i++) {
        printf("%d人目", i);
        scanf_s("%lf", &b);
        sum = sum + b;
    }
    printf("%4.1f\n", sum / a);
    return 0;
}