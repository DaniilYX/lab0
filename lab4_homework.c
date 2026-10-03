#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void check(int a, int b, int c) {
    if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0)) {
        printf("Калибровка выполнена успешно!");
    }
    else {
        printf("Калибровка не выполнена");
    }
}
int main()
{
    int A;
    int B;
    int C;
    puts("Введите целые значения для параметров A, B, C:\n");
    scanf("%d%d%d", &A, &B, &C);
    check(A, B, C);
    system("pause");
    return 0;
}