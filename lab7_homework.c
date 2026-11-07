#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int h;
    printf("Р’РІРµРґРёС‚Рµ РІСЂРµРјСЏ, РєРѕР»РёС‡РµСЃС‚РІРѕ С‡Р°СЃРѕРІ:\n");
    scanf("%d", &h);
    switch(h)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        printf("Р”РѕР±СЂРѕРµ СѓС‚СЂРѕ!\n");
        break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        printf("Р”РѕР±СЂС‹Р№ РґРµРЅСЊ!\n");
        break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        printf("Р”РѕР±СЂС‹Р№ РІРµС‡РµСЂ!\n");
        break;
        case 23:
        case 0:
        case 1:
        case 2:
        case 3:
        printf("РЎРїРѕРєРѕР№РЅРѕР№ РЅРѕС‡Рё!\n");
        break;
        default:
        printf("РќРµРєРѕСЂСЂРµРєС‚РЅРѕРµ Р·РЅР°С‡РµРЅРёРµ С‡Р°СЃРѕРІ!\n");
    }
    system("pause");
    return 0;
}