#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int h;
    printf("˜˜˜˜˜˜˜ ˜˜˜˜˜, ˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜:\n");
    scanf("%d", &h);
    switch(h)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        printf("˜˜˜˜˜˜ ˜˜˜˜!\n");
        break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        printf("˜˜˜˜˜˜ ˜˜˜˜!\n");
        break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        printf("˜˜˜˜˜˜ ˜˜˜˜˜!\n");
        break;
        case 23:
        case 0:
        case 1:
        case 2:
        case 3:
        printf("˜˜˜˜˜˜˜˜˜ ˜˜˜˜!\n");
        break;
        default:
        printf("˜˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜ ˜˜˜˜˜!\n");
    }
    system("pause");
    return 0;
}