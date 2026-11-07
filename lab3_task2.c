#include <stdio.h>
#define D 2.54
#define P 2.32166
#define C 2.7076
int main()
{
    int dym, bym, wym;
    float result;
    float result1;
    float result2;
    puts("Р’РІРµРґРёС‚Рµ РєРѕР»РёС‡РµСЃС‚РІРѕ РґСЋР№РјРѕРІ Р°РЅРіР»РёР№СЃРєРѕРіРѕ, РёСЃРїР°РЅСЃРєРѕРіРѕ, СЃС‚Р°СЂРѕР»РёС‚РѕРІСЃРєРѕРіРѕ: \n");
    scanf("%d%d%d", &dym, &bym, &wym);
    result = D *dym;
    result1 = P *bym;
    result2 = C *wym;
    printf("%d Р°РЅРіР»РёР№СЃРєРёС… РґСЋР№РјРѕРІ - СЌС‚Рѕ %.2f СЃРј\n%d РёСЃРїР°РЅСЃРєРёС… РґСЋР№РјРѕРІ - СЌС‚Рѕ %.2f СЃРј\n%d СЃС‚Р°СЂРѕР»РёС‚РѕРІСЃРєРёС… РґСЋР№РјРѕРІ - СЌС‚Рѕ %.2f СЃРј", dym, result, bym, result1, wym, result2);
    return 0;
}