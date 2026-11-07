#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
double sin_n(double x, int N) {
    double sum = 0.0;
    double s = x;
    sum += s;
    for (int k = 2; k <= N; k++) {
        s = s * (-1.0) * pow(x, 2) / ((2 * k - 2) * (2 * k - 1));
        sum += s;
    }
    return sum;
}
double sin_eps(double x, double eps) {
    double sum = 0.0;
    double s = x;
    sum += s;
    int k = 2;
    while (fabs(s) >= eps) {
        s = s * (-1.0) * pow(x, 2) / ((2 * k - 2) * (2 * k - 1));
        sum += s;
        k++;
    }
    return sum;
}
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double x;
    int N;
    double eps;
    printf("Р’РІРµРґРёС‚Рµ Р·РЅР°С‡РµРЅРёРµ (РІ СЂР°РґРёР°РЅР°С…) РґР»СЏ РІС‹С‡РёСЃР»РµРЅРёСЏ sin(x), С‡РёСЃР»Рѕ N С‡Р»РµРЅРѕРІ Рё С‚РѕС‡РЅРѕСЃС‚СЊ:\n");
    scanf("%lf %d %lf", &x, &N, &eps);
    printf("РЎРїРѕСЃРѕР± С‡РµСЂРµР· sin(x): %.4lf\n", sin(x));
    printf("РЎРїРѕСЃРѕР± С‡РµСЂРµР· С„СѓРЅРєС†РёСЋ sin_n: %.4lf, РѕС‚РєР»РѕРЅРµРЅРёРµ РѕС‚ СЃС‚Р°РЅРґР°СЂС‚Р°: %.4lf\n", sin_n(x, N), sin(x) - sin_n(x, N));
    printf("РЎРїРѕСЃРѕР± С‡РµСЂРµР· С„СѓРЅРєС†РёСЋ sin_eps: %.4lf, РѕС‚РєР»РѕРЅРµРЅРёРµ РѕС‚ СЃС‚Р°РЅРґР°СЂС‚Р°: %.4lf\n", sin(x) - sin_eps(x, eps));
    system("pause");
    return 0;
}