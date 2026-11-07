#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char c;
    int i;
    float f;
    double d;
    puts("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёСЏ РґР»СЏ: char c, int i, float f, double d:\n");
    scanf("%c%d%f%e", &c, &i, &f, &d);
    printf("Р¦РµР»Р°СЏ С‡Р°СЃС‚СЊ f = %d, РґСЂРѕР±РЅР°СЏ С‡Р°СЃС‚СЊ f = %d\n", (int)f, (int)(f * 100) % 100);
    printf("РЁРµСЃС‚РЅР°РґС†Р°С‚РµСЂРёС‡РЅС‹Р№ РєРѕРґ c: %x, РґРµСЃСЏС‚РёС‡РЅС‹Р№ РєРѕРґ c: %d\n", c, c);
    printf("Р”РµСЃСЏС‚РёС‡РЅРѕРµ С‡РёСЃР»Рѕ 1/i: %.2f\n", 1 / (float)i);
    system("pause");
    return 0;
}