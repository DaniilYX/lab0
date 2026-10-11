#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    char c;
    float x, y;
    printf("Введите простое арифметическое действие с двумя числами:\n");
    scanf("%f%c%f", &x, &c, &y);
    switch(c)
    {
        case '+':
        printf("=%.2f\n", x+y);
        break;
        case '-':
        printf("=%.2f\n", x-y);
        break;
        case '*':
        printf("=%.2f\n", x*y);
        break;
        case '/':
        printf("=%.2f\n", x/y);
        break;
        case '^':
        printf("=%.2f\n", pow(x, y));
        break;
        case '%':
        printf("=%.2f\n", fmodf(x, y));
        break;
        default:
        printf("Ошибка ввода!\n");
    }
    system("pause");
    return 0;
}