#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE

float sector(float r, float rad) { // РїР»РѕС‰Р°РґСЊ СЃРµРєС‚РѕСЂР°
    return (r * r * rad) / 2.0;
}

int main()
{
    float rad, result, radius;
    puts("Р’РІРµРґРёС‚Рµ С‡РёСЃР»Рѕ СЂР°РґРёР°РЅ РґСѓРіРё Рё СЂР°РґРёСѓСЃ: \n");
    scanf("%f%f", &rad, &radius);
    result = sector(radius, rad); // С„РѕСЂРјСѓР»Р° СЂР°СЃС‡РµС‚Р° РїР»РѕС‰Р°РґРё
    printf("РџР»РѕС‰Р°РґСЊ СЃРµРєС‚РѕСЂР°, СЂР°РґРёСѓСЃ РєРѕС‚РѕСЂРѕРіРѕ СЂР°РІРµРЅ 13.7,  РґСѓРіР° %.2f СЂР°РґРёР°РЅ, СЂР°РІРЅР° - %.2f РєРІР°РґСЂР°С‚РЅС‹С… РµРґРёРЅРёС†", rad, result);
    return 0;
}