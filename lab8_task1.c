#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n, m;
    int s = 0;
    int k = 0;
    printf("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёРµ n:\n");
    scanf("%d", &n);
    printf("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёРµ m:\n");
    scanf("%d", &m);
    for (int i = m; i <= n; i++) {
        s += i;
        k++;
    }
    printf("Р РµР·СѓР»СЊС‚Р°С‚ %d\nРљРѕР»РёС‡РµСЃС‚РІРѕ РїРѕРІС‚РѕСЂРµРЅРёР№ %d", s, k);

    system("pause");
    return 0;
}