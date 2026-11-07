#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main()
{
    float c = 0.4;
    float x;
    puts("Р’РІРµРґРёС‚Рµ РЅР°С‚СѓСЂР°Р»СЊРЅРѕРµ С‡РёСЃР»Рѕ РґР»СЏ РїРµСЂРµРјРµРЅРЅРѕР№ x: \n");
    scanf("%f", &x);
    float a = log10(x);
    float b = pow(a, 2) + pow(c * x, 0.5);
    float y = exp(2 * x) + pow(9.7, b);
    printf("Р—РЅР°С‡РµРЅРёРµ x: %.2f\nР—РЅР°С‡РµРЅРёРµ С„СѓРЅРєС†РёРё a: %.3f\nР—РЅР°С‡РµРЅРёРµ С„СѓРЅРєС†РёРё b: %.3f\nР—РЅР°С‡РµРЅРёРµ С„СѓРЅРєС†РёРё y: %.3f", x, a, b, y);
    
    return 0;
}