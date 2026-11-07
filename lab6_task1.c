#include <stdio.h>
int main()
{
    int yeas;
    puts("Р’РІРµРґРёС‚Рµ РіРѕРґ:\n");
    scanf("%d", &yeas);
    if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0)) {
        printf("РіРѕРґ %d - РІРёСЃРѕРєРѕСЃРЅС‹Р№ РіРѕРґ", yeas);
    }
    else {
        printf("РіРѕРґ %d - РЅРµ РІРёСЃРѕРєРѕСЃРЅС‹Р№ РіРѕРґ", yeas);
    }
    return 0;
}