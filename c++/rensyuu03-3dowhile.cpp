#include <stdio.h>
int main(void) {
    double b, sum;
    int a, i;
    sum = 0;
    do {
        printf("何人いますか");
        scanf_s("%d", &a);
    } while (a <= 0);
    for (i = 0; i < a; i++) {
        printf("%d人目", a);
        scanf_s("%lf", &b);
        sum = sum + b;
        a--;
    }
    printf("%4.2f\n", sum / a);
    return 0;
}