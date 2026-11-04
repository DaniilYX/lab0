#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    int m = 1 + rand() % 3;
    int k;
    printf("Выберите:\nКамень (1)\nНожницы (2)\nБумага (3)\n");
    scanf("%d", &k);
    switch (k)
    {
        case 1:
        if (k == m) 
            printf("Ничья\n");
        else if (m == 2) 
            printf("Вы выиграли!\n");
        else 
            printf("Вы проиграли(\n");
        break;

        case 2:
        if (k == m)
            printf("Ничья");
        if (m == 3)
            printf("Вы выиграли!\n");
        else
            printf("Вы проиграли(\n");
        break;

        case 3:
        if (k == m)
            printf("Ничья\n");
        if (m == 1)
            printf("Вы выиграли!\n");
        else
            printf("Вы проиграли(\n");
        break;

        default:
        printf("Неверное значение!\n");
    }
    system("pause");
    return 0;
}