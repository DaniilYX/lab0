#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 10
int main()
{
    setlocale(LC_CTYPE, "Russian");
    float A[N];
    float temp;
    float s = 0.0;

    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }
    printf("|Индекс|Исходное значение|Новое значение|\n");
    printf("|------|-----------------|--------------|\n");
    for (int k = 0; k < N; k++) {
        float t = A[k];
        if (k % 2 != 0) {
            A[k] += 1;
            s += A[k];
        }
        s += A[k];
        printf("| %d | %.2f | %.2f |\n", k + 1, t, A[k]);
        printf("|------|-----------------|--------------|\n");
    }
    printf("Среднее арифметическое: %.2f\n", s / N);
    system("pause");
    return 0;
}
