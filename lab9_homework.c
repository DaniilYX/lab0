#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int t;

    do {
        char z;
        int a, b, c;
        printf("Введите символ из которого будет строиться фигура:\n");
        scanf(" %c", &z);
        printf("Введите параметры для трех сторон через пробел:\n");
        scanf("%d %d %d", &a, &b, &c);
        printf("Пустой треугольник внутри:\n");
        printf("\n");
        
        if ((a < b + c) && (b < a + c) && (c < a + b)) {
            for (int i = 1; i <= a; i++) {
                for (int s = 1; s <= b; s++) {
                    if (s == 1) {
                        printf("%c", z);
                    }
                    else if (i == a && s <= b) {
                        printf("%c", z);
                    }
                    else if (s * a == i * b) {
                        printf("%c", z);
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else {
            printf("Треугольника с такими сторонами не существует!\n");
        }
        printf("Продолжить? (Да - ведите любое число, Нет - введите 0)\n");
        scanf("%d", &t);
    } while(t != 0);

    system("pause");
    return 0;
}