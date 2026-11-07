#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
double fa(double x) {
    double y;
    if (x <= 3) {
        y = pow(x, 2) - 3 * x + 9;
    }
    else {
        y = 1 / (pow(x, 3) + 3);
    }
    return y;
}
double fb(double x) {
    return x * exp(sin(pow(x, 2)));
}
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int x;
    int c;
    printf("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёРµ РґР»СЏ РїРµСЂРµРјРµРЅРЅРѕР№ x:\n");
    scanf("%d", &x);
    printf("Р’С‹Р±РµСЂРёС‚Рµ РѕРґРёРЅ РёР· РІР°СЂРёР°РЅС‚РѕРІ: Р—РЅР°С‡РµРЅРёРµ fa(x) (1), Р—РЅР°С‡РµРЅРёРµ fb(x) (2), РџСЂРѕРёР·РІРµРґРµРЅРёРµ (3),\nР Р°Р·РЅРѕСЃС‚СЊ РєРІР°РґСЂР°С‚РѕРІ (4), РЈРґРІРѕРµРЅРЅР°СЏ СЃСѓРјРјР° РґРІСѓС… С„СѓРЅРєРёР№ (5)\n");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        printf("%.2lf\n", fa(x));
        break;
        case 2:
        printf("%.2lf\n", fb(x));
        break;
        case 3:
        printf("%.2lf\n", fa(x) * fb(x));
        break;
        case 4:
        printf("%.2lf\n", pow(fa(x), 2) - pow(fb(x), 2));
        break;
        case 5:
        printf("%.2lf\n", (fa(x) + fb(x)) * 2);
        break;

        default:
        printf("РћС€РёР±РєР° РІРІРѕРґР°!\n");
    }
    system("pause");
    return 0;
}