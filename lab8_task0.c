#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    char c;
    int num;
    printf("Введите количество символов:\n");
    scanf("%d", &num);
    printf("Введите символ:\n");
    scanf(" %c", &c);

    // putchar('+');
    // for (int i = 1; i<=num; i++) putchar (c);
    // putchar('+');

    // int m = num / 2;
    // for (int i = 1; i<=num; i++) {
    //     if (i <= m) {
    //         putchar(c);
    //     }
    //     else {
    //         putchar('+');
    //     }
    // }

    for (int i = 1; i<=num; i++) {
        putchar(c);
        putchar('!');
    }
    system("pause");
    return 0;
}