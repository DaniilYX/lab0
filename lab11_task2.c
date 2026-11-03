#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float A[100];
    int P = 0;
    int O = 0;
    int Sum_P = 0;
    int Sum_O = 0;
    printf("Функция f(x) = x^2 - cos^2 pi * x\n");
    int step1, step2, result;
    printf("Введите шаг табуляции:\n");
    scanf("%d%d", &step1, &step2);
    for (int i = step1; i <= step2; i++) {
        result = (pow(i, 2) - pow(cos(i * M_PI), 2));
        A[i] = result;
        if (result >= 0) {
            P += 1;
            Sum_P += result;
        }
        else {
            O += 1;
            Sum_O += result;
        }
    }
    printf("Имя массива: A, накопленное значение для положительных элементов: %d, для отрицательных: %d\n, число положительных элементов: %d\n, число отрицательных элементов: %d\n, среднее значение положительных элементов: %.2f\n", Sum_P, Sum_O, P, O, (float)Sum_P / P);
    system("pause");
    return 0;
}