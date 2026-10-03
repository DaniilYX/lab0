#include <stdio.h>
#define _USE_MATH_DEFINES
#define M_PI
#include <math.h>
#include <locale.h>
#include <conio.h>

int main()
{
    float gr;
    puts("Введите количество градусов: \n");
    scanf("%f", &gr);
    printf("Значение синуса: %.6f", sin(gr * M_PI/180));
    return 0;
}