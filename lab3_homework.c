#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
int main()
{
    float rad;
    float result;
    puts("Введите число радиан дуги: \n");
    scanf("%f", &rad);
    result = ((13.7 * 13.7) * rad) / 2; // формула расчета площади
    printf("Площадь сектора, радиус которого равен 13.7, а дуга %.2f радиан, равна - %.2f квадратных единиц", rad, result);
    return 0;
}