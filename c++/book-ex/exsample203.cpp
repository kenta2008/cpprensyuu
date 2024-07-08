#include <stdio.h>

int main() {
    double h, b;
    printf("三角形の底辺を入力:");
    scanf_s("%lf", &b);
    printf("三角形の高さを入力:");
    scanf_s("%lf", &h);
    if (h > 0 && b > 0) {
        printf("三角形の面積は%lfです", (h * b) / 2);
    }
    else {
        printf("面積を計算できません");
    }
    
    return 0;
}
