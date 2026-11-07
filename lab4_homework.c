#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void check(int a, int b, int c) {
    if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0)) {
        printf("РљР°Р»РёР±СЂРѕРІРєР° РІС‹РїРѕР»РЅРµРЅР° СѓСЃРїРµС€РЅРѕ!");
    }
    else {
        printf("РљР°Р»РёР±СЂРѕРІРєР° РЅРµ РІС‹РїРѕР»РЅРµРЅР°");
    }
}
int main()
{
    int A;
    int B;
    int C;
    puts("Р’РІРµРґРёС‚Рµ С†РµР»С‹Рµ Р·РЅР°С‡РµРЅРёСЏ РґР»СЏ РїР°СЂР°РјРµС‚СЂРѕРІ A, B, C:\n");
    scanf("%d%d%d", &A, &B, &C);
    check(A, B, C);
    system("pause");
    return 0;
}