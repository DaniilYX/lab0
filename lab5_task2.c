#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main()
{
    float c = 0.4;
    float x;
    puts("Введите натуральное число для переменной x: \n");
    scanf("%f", &x);
    float a = log10(x);
    float b = pow(a, 2) + pow(c * x, 0.5);
    float y = exp(2 * x) + pow(9.7, b);
    printf("Значение x: %.2f\nЗначение функции a: %.3f\nЗначение функции b: %.3f\nЗначение функции y: %.3f", x, a, b, y);
    
    return 0;
}