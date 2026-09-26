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
    puts("Введите количество дюймов английского, испанского, старолитовского: \n");
    scanf("%d%d%d", &dym, &bym, &wym);
    result = D *dym;
    result1 = P *bym;
    result2 = C *wym;
    printf("%d английских дюймов - это %.2f см\n%d испанских дюймов - это %.2f см\n%d старолитовских дюймов - это %.2f см", dym, result, bym, result1, wym, result2);
    return 0;
}