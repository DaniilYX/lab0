#include <stdio.h>
int main()
{
    int yeas;
    puts("Введите год:\n");
    scanf("%d", &yeas);
    if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0)) {
        printf("год %d - високосный год", yeas);
    }
    else {
        printf("год %d - не високосный год", yeas);
    }
    return 0;
}