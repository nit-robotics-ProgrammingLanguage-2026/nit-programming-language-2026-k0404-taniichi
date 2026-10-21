#include <stdio.h>

int main(void) {
    /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
   int x;

    // 標準入力からint型のxを受け取る
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "エラー: 有効な整数が入力されていません。\n");
        return 1;
    }

    // ゼロ除算（x + 100 = 0）の防止
    if (x == -100) {
        fprintf(stderr, "エラー: x + 100 が 0 になるため、逆数は計算できません。\n");
        return 1;
    }

    // int同士の演算による切り捨てを防ぐため、(double)でキャストして計算
    double result = 1.0 / ((double)x + 100.0);

    // 小数点以下15桁で出力
    printf("%.15f\n", result);

    return 0;
}
