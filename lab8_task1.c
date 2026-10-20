#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n, m;
    int s = 0;
    int k = 0;
    printf("Введите значение n:\n");
    scanf("%d", &n);
    printf("Введите значение m:\n");
    scanf("%d", &m);
    for (int i = m; i <= n; i++) {
        s += i;
        k++;
    }
    printf("Результат %d\nКоличество повторений %d", s, k);

    system("pause");
    return 0;
}