#include <stdio.h>

int main() {
    int a = 3;
    int b = 6;
    double heikin;
    heikin = (a+b) / 2.0;
    printf("%d+%d=%d\n", b, a, b + a);
    printf("%d-%d=%d\n", b, a, b - a);
    printf("%dと%dの平均値%lf\n", b, a, heikin);
    return 0;
}

//6+3=9
//6-3=3
//6と3の平均値4.500000