#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float s = 0.0;
    float n = 1.0;
    for (int i = 1; i <= 10; ++i) {
        s += sin(n);
        n += 0.1;
    }
    printf("Сумма: %f", s);

    system("pause");
    return 0;
}