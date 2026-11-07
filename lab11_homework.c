#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n;
    int A;
    int S = 0;
    printf("Р’РІРµРґРёС‚Рµ РєРѕР»РёС‡РµСЃС‚РІРѕ СЌР»РµРјРµРЅС‚РѕРІ:\n");
    scanf("%d", &n);
    printf("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёРµ РґР»СЏ С‡РёСЃР»Р° A:\n");
    scanf("%d", &A);
    int M[n];
    printf("Р’РІРµРґРёС‚Рµ С†РµР»РѕРµ РїРѕР»РѕР¶РёС‚РµР»СЊРЅРѕРµ/РѕС‚СЂРёС†Р°С‚РµР»СЊРЅРѕРµ С‡РёСЃР»Рѕ:\n");
    for (int i = 0; i < n; i++) {
        printf("M[%d] = ", i + 1);
        scanf("%d", &M[i]);
    }
    for (int k = 0; k < n; k++) {
        int P = 1;
        if (M[k] >= -A && M[k] <= -A / 2.0) {
            P = 0;
        }
        if (M[k] >= A) {
            P = 0;
        }
        if (P) {
            S += M[k];
        }
    }
    printf("РЎСѓРјРјР° СЌР»РµРјРµРЅС‚РѕРІ РІРЅРµ РґРёР°РїР°Р·РѕРЅР° РѕС‚ %d РґРѕ %.2f Рё Р±РѕР»СЊС€Рµ %d: %d\n", -A, -A / 2.0, A, S);

    system("pause");
    return 0;
}