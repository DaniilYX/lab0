#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
double fa(double x) {
    double y;
    if (x <= 3) {
        y = pow(x, 2) - 3 * x + 9;
    }
    else {
        y = 1 / (pow(x, 3) + 3);
    }
    return y;
}
double fb(double x) {
    return x * exp(sin(pow(x, 2)));
}
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int x;
    int c;
    printf("Введите значение для переменной x:\n");
    scanf("%d", &x);
    printf("Выберите один из вариантов: Значение fa(x) (1), Значение fb(x) (2), Произведение (3),\nРазность квадратов (4), Удвоенная сумма двух функий (5)\n");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        printf("%.2lf\n", fa(x));
        break;
        case 2:
        printf("%.2lf\n", fb(x));
        break;
        case 3:
        printf("%.2lf\n", fa(x) * fb(x));
        break;
        case 4:
        printf("%.2lf\n", pow(fa(x), 2) - pow(fb(x), 2));
        break;
        case 5:
        printf("%.2lf\n", (fa(x) + fb(x)) * 2);
        break;

        default:
        printf("Ошибка ввода!\n");
    }
    system("pause");
    return 0;
}