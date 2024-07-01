#include <stdio.h>
int main(void) {
        int n;
        printf("年=");
        scanf_s("%d", &n);
        if (n % 400 == 0)
        {
            printf("うるう年です\n");
        }
        else if (n % 100 == 0)
        {
            printf("うるう年ではありません\n");
        }
        else if (n % 4 == 0)
        {
            printf("うるう年です\n");
        }
        else {
            printf("うるうどしではありません");
        }

        return 0;
}