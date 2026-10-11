#include <stdio.h>
int main()
{
    char c;
    printf("Введите букву или цифру: ");
    scanf("%c", &c); //считывание с консоли
    switch (c)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("Это цифра\n");
        break;

        default:
        printf("Это буква\n");
    }
    return 0;
}