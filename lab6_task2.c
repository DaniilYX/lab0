#include <stdio.h> // x^2 - 3x + 9 при x<=3
#define _USE_MATH_DEFINES
#include <math.h> // 1 / (x^3 + 6) при x > 3
float F(int p) {
    if (p <= 3) {
        return pow(p, 2) - 3 * p + 9;
    }
    else {
        return 1.0 / (pow(p, 3) + 6);
    }
}
int main()
{
    int x;
    puts("Введите число для переменной x:\n");
    scanf("%d", &x);
    printf("функция F(%d) = %.2f", x, F(x));
    
    return 0;
}