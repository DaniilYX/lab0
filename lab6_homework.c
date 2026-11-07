#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int proverka(int n, int p) {
    if (n * p > 2000) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    setlocale(LC_CTYPE, "");
    int num1, num2, result;
    puts("Р’РІРµРґРёС‚Рµ РґРІР° РґРІСѓР·РЅР°С‡РЅС‹С… РЅР°С‚СѓСЂР°Р»СЊРЅС‹С… С‡РёСЃР»Р°:\n");
    scanf("%d%d", &num1, &num2);
    if ((num1 >= 10 && num1 <= 99) && (num2 >= 10 && num2 <= 99)) {
        result = proverka(num1, num2);
        printf("РџСЂРµРІС‹С€Р°РµС‚ Р»Рё РїСЂРѕРёР·РІРµРґРµРЅРёРµ РґРІСѓС… С‡РёСЃРµР» 2000? - %d\n", result);
    }
    else {
        printf("РћС€РёР±РєР° РІРІРѕРґР°!");
        return -1;
    }
    system("pause");
    return 0;
}