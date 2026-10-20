#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    printf("Функция f(x) = x^2 - cos^2 pi * x\n");
    int step1, step2, result;
    printf("Введите шаг табуляции:\n");
    scanf("%d%d", &step1, &step2);
    printf("-----------------\n");
    printf("| x | f(x) |\n");
    printf("-----------------\n");
    for (int i = step1; i <= step2; i++) {
        result = (pow(i, 2) - pow(cos(i * M_PI), 2));
        printf("| %d | %d |\n", i, result);
        printf("-----------------\n");
    }
    system("pause");
    return 0;
}