#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char c;
    int i;
    float f;
    double d;
    puts("Введите значения для: char c, int i, float f, double d:\n");
    scanf("%c%d%f%e", &c, &i, &f, &d);
    printf("Целая часть f = %d, дробная часть f = %d\n", (int)f, (int)(f * 100) % 100);
    printf("Шестнадцатеричный код c: %x, десятичный код c: %d\n", c, c);
    printf("Десятичное число 1/i: %.2f\n", 1 / (float)i);
    system("pause");
    return 0;
}