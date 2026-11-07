#include <stdio.h>
int main()
{
    int num, num2;
    puts("Р’РІРµРґРёС‚Рµ С†РµР»РѕРµ С‡РёСЃР»Рѕ: \n");
    scanf("%d%d", &num, &num2);
    printf("Р’РІРµРґРµРЅС‹ С‡РёСЃР»Р°: %d, %d\n", num, num2);
    printf("РЎСѓРјРјР° С‡РёСЃРµР»: %d\n", num2 + num);
    printf("Р Р°Р·РЅРѕСЃС‚СЊ С‡РёСЃРµР»: %d\n", num2 - num);
    printf("Р§Р°СЃС‚РЅРѕРµ: %d\n", num2 / num * 1);
    printf("РћСЃС‚Р°С‚РѕРє: %d\n", num2 % num);
    return 0;
}