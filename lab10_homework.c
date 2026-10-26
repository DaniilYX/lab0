#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
float S(int a, int b, int c) {
    float p = 1.0 * (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Opr() {
    printf("Треугольник - это геометрическая фигура, которая состоит из трёх вершин, не лежащих на одной прямой, и трёх отрезков, попарно соединяющих эти точки. Главное: длина одной стороны не должна быть больше суммы двух других!\n");
}

void Figura(int a, int b, int c, char z) {
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
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int w;
    printf("Выберите один из вариантов:\n1)Рассчитать площадь - 1\n2)Вывести определение фигуры - 2\n3)Нарисовать фигуру - 3\n");
    scanf("%d", &w);
    switch(w)
    {
        case 1:
        int a, b, c;
        printf("Введите параметры для трех сторон через пробел:\n");
        scanf("%d %d %d", &a, &b, &c);
        printf("Искомая площадь треугольника: %.2f\n", S(a, b, c));
        break;
        case 2:
        Opr();
        break;
        case 3:
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
            Figura(a, b, c, z);
            printf("Продолжить? (Да - ведите любое число, Нет - введите 0)\n");
            scanf("%d", &t);
        } while(t != 0);
        break;
        default:
        printf("Ошибка ввода!\n");
    }
    system("pause");
    return 0;
}