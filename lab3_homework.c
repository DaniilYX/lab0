#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE

float sector(float r, float rad) { // площадь сектора
    return (r * r * rad) / 2.0;
}

int main()
{
    float rad, result, radius;
    puts("Введите число радиан дуги и радиус: \n");
    scanf("%f%f", &rad, &radius);
    result = sector(radius, rad); // формула расчета площади
    printf("Площадь сектора, радиус которого равен 13.7,  дуга %.2f радиан, равна - %.2f квадратных единиц", rad, result);
    return 0;
}