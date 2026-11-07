#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char a;
    do {
    int num, result = 0;
    printf("Р’РІРµРґРёС‚Рµ РїСЂРѕРёР·РІРѕР»СЊРЅРѕ РґР»РёРЅРЅРѕРµ С†РµР»РѕРµ С‡РёСЃР»Рѕ:\n");
    scanf("%d", &num);

    int t1 = num % 10;
    result += 1;
    num = num / 10;

    while(num > 0) {
        int t2 = num % 10;
        if (t2 == t1) {
            result += 1;
        }
        num = num / 10;
    }

    printf("С‡РёСЃР»Рѕ РїРѕРІС‚РѕСЂРµРЅРёР№ РїРѕСЃР»РµРґРЅРµР№ С†РёС„СЂС‹ %d РІ С‡РёСЃР»Рµ: %d\n", t1, result);
    printf("РџСЂРѕРґРѕР»Р¶РёС‚СЊ? (Р”Р° - y, РЅРµС‚ - n)\n");
    scanf(" %c", &a);
    } while(a == 'y');
    
    system("pause");
    return 0;
}