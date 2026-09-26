#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
int main()
{
    float a, b;
    puts("Введите вещественные числа: \n");
    scanf("%f%f", &a, &b);
    puts("-------------------------------------------------");
    printf("| a*b | a+b | a-b |\n");
    puts("-------------------------------------------------");
    printf("| %.2f*%.2f | %.2f+%.2f | %.2f-%.2f |\n", a, b, a, b, a, b);
    puts("-------------------------------------------------");
    printf("| %.2f | %.2f | %.2f |\n", a * b, a + b, a - b);
    puts("-------------------------------------------------");
    system("pause");
    return 0;
}
