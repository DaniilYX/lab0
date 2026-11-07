#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    char c;
    float x, y;
    printf("Р’РІРµРґРёС‚Рµ РїСЂРѕСЃС‚РѕРµ Р°СЂРёС„РјРµС‚РёС‡РµСЃРєРѕРµ РґРµР№СЃС‚РІРёРµ СЃ РґРІСѓРјСЏ С‡РёСЃР»Р°РјРё:\n");
    scanf("%f%c%f", &x, &c, &y);
    switch(c)
    {
        case '+':
        printf("=%.2f\n", x+y);
        break;
        case '-':
        printf("=%.2f\n", x-y);
        break;
        case '*':
        printf("=%.2f\n", x*y);
        break;
        case '/':
        printf("=%.2f\n", x/y);
        break;
        case '^':
        printf("=%.2f\n", pow(x, y));
        break;
        case '%':
        printf("=%.2f\n", fmodf(x, y));
        break;
        default:
        printf("РћС€РёР±РєР° РІРІРѕРґР°!\n");
    }
    system("pause");
    return 0;
}