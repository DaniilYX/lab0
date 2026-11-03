#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n;
    int A;
    int S = 0;
    printf("Введите количество элементов:\n");
    scanf("%d", &n);
    printf("Введите значение для числа A:\n");
    scanf("%d", &A);
    int M[n];
    printf("Введите целое положительное/отрицательное число:\n");
    for (int i = 0; i < n; i++) {
        printf("M[%d] = ", i + 1);
        scanf("%d", &M[i]);
    }
    for (int k = 0; k < n; k++) {
        int P = 1;
        if (M[k] >= -A && M[k] <= -A / 2.0) {
            P = 0;
        }
        if (M[k] >= A) {
            P = 0;
        }
        if (P) {
            S += M[k];
        }
    }
    printf("Сумма элементов вне диапазона от %d до %.2f и больше %d: %d\n", -A, -A / 2.0, A, S);

    system("pause");
    return 0;
}