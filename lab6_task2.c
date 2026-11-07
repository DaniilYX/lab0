#include <stdio.h> // x^2 - 3x + 9 РїСЂРё x<=3
#define _USE_MATH_DEFINES
#include <math.h> // 1 / (x^3 + 6) РїСЂРё x > 3
float F(int p) {
    if (p <= 3) {
        return pow(p, 2) - 3 * p + 9;
    }
    else {
        return 1.0 / (pow(p, 3) + 6);
    }
}
int main()
{
    int x;
    puts("Р’РІРµРґРёС‚Рµ С‡РёСЃР»Рѕ РґР»СЏ РїРµСЂРµРјРµРЅРЅРѕР№ x:\n");
    scanf("%d", &x);
    printf("С„СѓРЅРєС†РёСЏ F(%d) = %.2f", x, F(x));
    
    return 0;
}