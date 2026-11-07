#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int t;

    do {
        char z;
        int a, b, c;
        printf("Р’РІРµРґРёС‚Рµ СЃРёРјРІРѕР» РёР· РєРѕС‚РѕСЂРѕРіРѕ Р±СѓРґРµС‚ СЃС‚СЂРѕРёС‚СЊСЃСЏ С„РёРіСѓСЂР°:\n");
        scanf(" %c", &z);
        printf("Р’РІРµРґРёС‚Рµ РїР°СЂР°РјРµС‚СЂС‹ РґР»СЏ С‚СЂРµС… СЃС‚РѕСЂРѕРЅ С‡РµСЂРµР· РїСЂРѕР±РµР»:\n");
        scanf("%d %d %d", &a, &b, &c);
        printf("РџСѓСЃС‚РѕР№ С‚СЂРµСѓРіРѕР»СЊРЅРёРє РІРЅСѓС‚СЂРё:\n");
        printf("\n");
        
        if ((a < b + c) && (b < a + c) && (c < a + b)) {
            for (int i = 1; i <= a; i++) {
                for (int s = 1; s <= b; s++) {
                    if (s == 1) {
                        printf("%c", z);
                    }
                    else if (i == a && s <= b) {
                        printf("%c", z);
                    }
                    else if (s * a == i * b) {
                        printf("%c", z);
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else {
            printf("РўСЂРµСѓРіРѕР»СЊРЅРёРєР° СЃ С‚Р°РєРёРјРё СЃС‚РѕСЂРѕРЅР°РјРё РЅРµ СЃСѓС‰РµСЃС‚РІСѓРµС‚!\n");
        }
        printf("РџСЂРѕРґРѕР»Р¶РёС‚СЊ? (Р”Р° - РІРµРґРёС‚Рµ Р»СЋР±РѕРµ С‡РёСЃР»Рѕ, РќРµС‚ - РІРІРµРґРёС‚Рµ 0)\n");
        scanf("%d", &t);
    } while(t != 0);

    system("pause");
    return 0;
}