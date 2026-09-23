#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;

    printf("請輸入一個整數: ");
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "輸入錯誤: 請輸入有效的整數\n");
        return 1;
    }

    if (num % 2 == 0) {
        printf("%d 是偶數 (Even)\n", num);
    }
    else {
        printf("%d 是奇數 (Odd)\n", num);
    }

    return 0;
}