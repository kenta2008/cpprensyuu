#include <stdio.h>
int main(void) {
    double a, sum;
    int count;
    sum = 0;
    count = 0;
    a = 1;
    while (a!=0) {
        scanf_s("%lf",&a);
        sum = sum + a;
        count ++;
    }
    /*sum = sum / count;
    printf("%d\n", sum);*/
    count--;
    printf("%4.2f\n", sum / count);
    return 0;
}

