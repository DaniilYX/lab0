#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    int m = 1 + rand() % 3;
    int k;
    printf("Р’С‹Р±РµСЂРёС‚Рµ:\nРљР°РјРµРЅСЊ (1)\nРќРѕР¶РЅРёС†С‹ (2)\nР‘СѓРјР°РіР° (3)\n");
    scanf("%d", &k);
    switch (k)
    {
        case 1:
        if (k == m) 
            printf("РќРёС‡СЊСЏ\n");
        else if (m == 2) 
            printf("Р’С‹ РІС‹РёРіСЂР°Р»Рё!\n");
        else 
            printf("Р’С‹ РїСЂРѕРёРіСЂР°Р»Рё(\n");
        break;

        case 2:
        if (k == m)
            printf("РќРёС‡СЊСЏ");
        if (m == 3)
            printf("Р’С‹ РІС‹РёРіСЂР°Р»Рё!\n");
        else
            printf("Р’С‹ РїСЂРѕРёРіСЂР°Р»Рё(\n");
        break;

        case 3:
        if (k == m)
            printf("РќРёС‡СЊСЏ\n");
        if (m == 1)
            printf("Р’С‹ РІС‹РёРіСЂР°Р»Рё!\n");
        else
            printf("Р’С‹ РїСЂРѕРёРіСЂР°Р»Рё(\n");
        break;

        default:
        printf("РќРµРІРµСЂРЅРѕРµ Р·РЅР°С‡РµРЅРёРµ!\n");
    }
    system("pause");
    return 0;
}