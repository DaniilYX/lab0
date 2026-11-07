#include <stdio.h>
int main()
{
    char c;
    printf("Р’РІРµРґРёС‚Рµ Р±СѓРєРІСѓ РёР»Рё С†РёС„СЂСѓ: ");
    scanf("%c", &c); //СЃС‡РёС‚С‹РІР°РЅРёРµ СЃ РєРѕРЅСЃРѕР»Рё
    switch (c)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("Р­С‚Рѕ С†РёС„СЂР°\n");
        break;

        default:
        printf("Р­С‚Рѕ Р±СѓРєРІР°\n");
    }
    return 0;
}