#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float c = 0.4;
    float x;
    puts("Введите число для переменной x: \n");
    scanf("%f", &x);
    float a = log10(x);
    float b = pow(a, 2) + pow(c * x, 0.5);
    float y = exp(2 * x) + pow(9.7, b);
    
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;
    
    int ysl1 = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);
    printf("Условие 1 выполнено(1 - да, 0 - нет): %d\n", ysl1);
    
    int ysl2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("Условие 2 выполнено (1 - да, 0 - нет): %d", ysl2);
    
    return 0;
}