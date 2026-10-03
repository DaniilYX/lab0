#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    puts("Введите целое трехзначное число n:\n");
    scanf("%d", &n);
    printf("Последняя цифра: %d\nПервая цифра: %d\nСумма цифр: %d\n, Число наоборот: %d%d%d", n % 10, n / 100, n / 100 + ((n / 10) % 10) + n % 10, n % 10, (n / 10) % 10, n / 100);
    system("pause");
    return 0;
}