#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()

{
    setlocale(LC_CTYPE, "RUS");
    puts("РќР°Р¶РјРёС‚Рµ Enter РґР»СЏ РїСЂРѕРґРѕР»Р¶РµРЅРёСЏ...");
    getchar(); // РѕР¶РёРґР°РЅРёРµ РЅР°Р¶Р°С‚РёСЏ Enter
    puts("РџСЂРѕРґРѕР»Р¶РµРЅРёРµ РїСЂРѕРіСЂР°РјРјС‹");
    system("pause");
    return 0;
}