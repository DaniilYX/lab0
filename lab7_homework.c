#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int h;
    printf("Введите время, количество часов:\n");
    scanf("%d", &h);
    switch(h)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        printf("Доброе утро!\n");
        break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        printf("Добрый день!\n");
        break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        printf("Добрый вечер!\n");
        break;
        case 23:
        case 0:
        case 1:
        case 2:
        case 3:
        printf("Спокойной ночи!\n");
        break;
        default:
        printf("Некорректное значение часов!\n");
    }
    system("pause");
    return 0;
}