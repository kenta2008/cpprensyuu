#include <iostream>
#include <cstdio>  
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    int i,j,r;
    while (true) {
        printf("\n0~2までの数字を入力してください。(0:グー, 1:チョキ, 2:パー)");
        if (scanf_s("%d", &i) != 1 || i < 0 || i > 2) {
            printf("\n0~2までの範囲で入力してください。\n-->");
            printf("\n→\n");
            while (getchar() != '\n');
            continue;
        }

        printf("\n--------result----------");
        j = rand() % 3;
        r = rand() % 100;
        if (r == 0) {
            printf("\nYou win");
        }
        else {
            printf("\nYou lose");
        }
        
        printf("\n%dあなたが出した手", i);
        printf("\n%dコンピューターが出した手", j);
        printf("\n------------------------");
    }
 

    return 0;
 
}
