#include <stdio.h>
int main(void) {
    
    int a,i;
    int b=1;

   
    printf("何の階乗を計算しますか\n→");
    scanf_s("%d", &a);
    for (i = 2; i <= a; i++) {
        b*= i;
    }
    
    printf("%d!=%d\n",a,b);
    return 0;
}