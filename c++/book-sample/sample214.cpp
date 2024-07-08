#include <stdio.h>

int main() {
    int num;
    printf("1~3の値を入力してください:");
    //入力
    scanf_s("%d", &num);
    //入力した値が、正の数かどうかを調べる
    switch (num) {
    case 1:
        printf("1が入力されたよ\n");//numが3だった場合の処理
        break;
    case 2:
        printf("2が入力されたよ\n");//numが3だった場合の処理
        break;
    case 3:
        printf("3が入力されたよ\n");  //numが3だった場合の処理
        break;
    default:
        //それ以外の値が入力された場合の処理
        printf("不適切な値です");
        break;
    }
    return 0;
}