#include <stdio.h>

int main() {
    //使用する変数の定義
    int a1 = 2, b1 = 2, c1 = 2, d1 = 2;
    int a2 = 2, b2 = 2, c2 = 2, d2 = 2;
    //普通の演算による計算と代入
    printf("a1=%d b1=%d c1=%d d1=%d\n", a1 + 1, b1 - 1, c1 * 2, d1 / 2);
    printf("a2=%d b2=%d c2=%d d2=%d\n", a2 += 1, b1 -= 1, c1 *= 2, d1 /= 2);
    return 0;
}
