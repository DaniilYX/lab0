#include <stdio.h>
#define _USE_MATH_DEFINES
#define M_PI
#include <math.h>
#include <locale.h>
#include <conio.h>

int main()
{
    float gr;
    puts("Р’РІРµРґРёС‚Рµ РєРѕР»РёС‡РµСЃС‚РІРѕ РіСЂР°РґСѓСЃРѕРІ: \n");
    scanf("%f", &gr);
    printf("Р—РЅР°С‡РµРЅРёРµ СЃРёРЅСѓСЃР°: %.6f", sin(gr * M_PI/180));
    return 0;
}