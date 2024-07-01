#include <stdio.h>
int main(void) {
    int a;
    scanf_s("%d", &a);
    if (a>=80) {
        printf("あなたは優");
    }else if(a>=70){
        printf("あなたは良");
    }
    else if (a >= 60) {
        printf("あなたは可");
    }
    else {
        printf("あなたは不可");
    }
    
    return 0;
}