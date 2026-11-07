#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <conio.h>
#include <locale.h>

float F(float x, float y) {
    return (((3 + exp(y - 1)) / (1 + (pow(x, 2) * fabs(y - tan(x))))) + (50 * ((pow(fabs(y - x), 3)) / 3)));
}
int main()
{
    float x, y, result;
    puts("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёСЏ РґР»СЏ РїРµСЂРµРјРµРЅРЅС‹С… x, y:\n");
    scanf("%f%e", &x, &y);
    result = F(x, y);
    printf("РџСЂРё Р·РЅР°С‡РµРЅРёРё С„СѓРЅРєС†РёРё F(%.1f, %.1e) = %.3f", x, y, result);
    system("pause");
    return 0;
}