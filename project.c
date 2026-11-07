#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define NMAX 100

int size_matr(int *str, int *stb);
int vvod(int massive[NMAX][NMAX], int str, int stb);
int vvod_random(int massive[NMAX][NMAX], int str, int stb);
int vvod_f(int massive[NMAX][NMAX], int *str, int *stb);
int haracteristic(int massive[NMAX][NMAX], int str, int stb, int *h);
int sort_matr(int massive[NMAX][NMAX], int str, int stb, int *h);


int main()
{
    system("chcp 1251 > nul");

    int k, t;
    int str, stb;
    int massive[NMAX][NMAX];
    int h[NMAX];

    do {
        
        printf("---------------------------------------\n");
        printf("- Выберите способ заполнения матрицы: -\n");
        printf("-                                     -\n");
        printf("-     Ввод через клавиатуру - (1)     -\n");
        printf("-                                     -\n");
        printf("-     Ввод случайных чисел  - (2)     -\n");
        printf("-                                     -\n");
        printf("-     Ввод через файл .txt  - (3)     -\n");
        printf("-                                     -\n");
        printf("---------------------------------------\n");

        scanf("%d", &k);

        if (k == 1) {
            size_matr(&str, &stb);
            vvod(massive, str, stb);

            printf("Исходная матрица:\n");
            for (int i = 0; i < str; i++) {
                for (int j = 0; j < stb; j++) {
                    printf(" %d", massive[i][j]);
                }
                printf("\n");
            }

            haracteristic(massive, str, stb, h);
            sort_matr(massive, str, stb, h);

            printf("Отсортированная матрица:\n");
            for (int i = 0; i < str; i++) {
                for (int j = 0; j < stb; j++) {
                    printf(" %d", massive[i][j]);
                }
                printf("\n");
            }
            printf("Вернуться в меню? - Да (1) / Нет (0): ");
            scanf(" %d", &t);
        }

        if (k == 2) {
            size_matr(&str, &stb);
            vvod_random(massive, str, stb);

            printf("Исходная матрица:\n");
            for (int i = 0; i < str; i++) {
                for (int j = 0; j < stb; j++) {
                    printf(" %d", massive[i][j]);
                }
                printf("\n");
            }

            haracteristic(massive, str, stb, h);
            sort_matr(massive, str, stb, h);

            printf("Отсортированная матрица:\n");
            for (int i = 0; i < str; i++) {
                for (int j = 0; j < stb; j++) {
                    printf(" %d", massive[i][j]);
                }
                printf("\n");
            }
            printf("Вернуться в меню? - Да (1) / Нет (0): ");
            scanf(" %d", &t);
        }

        if (k == 3);

    } while (t != 0);

    system("pause");
    return 0;
}

int size_matr(int *str, int *stb) {
    do {
    printf("Введите количество строк:\n");
    scanf("%d", str);
    } while (*str < 1 || *str > NMAX);

    do {
    printf("Введите количество столбцов:\n");
    scanf("%d", stb);
    } while (*stb < 1 || *stb > NMAX);

    return 1;
}

int vvod(int massive[NMAX][NMAX], int str, int stb) {
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stb; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &massive[i][j]);
        }
    }
    return 1;
}

int vvod_random(int massive[NMAX][NMAX], int str, int stb) {
    printf("Матрица заполнена случайными числами:\n");
    srand(time(NULL));
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stb; j++) {
            massive[i][j] = -100 + rand() % 201;
        }
    }
    return 1;
}

int haracteristic(int massive[NMAX][NMAX], int str, int stb, int h[]) {
    for (int j = 0; j < stb; j++) {
        h[j] = 0;
    }

    for (int j = 0; j < stb; j++) {
        for (int i = 0; i < str; i++) {
            if (massive[i][j] < 0 && abs(massive[i][j]) % 2 != 0) {
                h[j] += abs(massive[i][j]);
            }
        }
    }
    return 1;
}

int sort_matr(int massive[NMAX][NMAX], int str, int stb, int h[]) {
    for (int i = 0; i < stb - 1; i++) {
        for (int j = 0; j < stb - 1 - i; j++) {
            if (h[j] > h[j + 1]) {
                int t = h[j];
                h[j] = h[j + 1];
                h[j + 1] = t;
                for (int k = 0; k < str; k++) {
                int v = massive[k][j];
                massive[k][j] = massive[k][j + 1];
                massive[k][j + 1] = v;
                }
            }
        }
    }
    return 1;
}