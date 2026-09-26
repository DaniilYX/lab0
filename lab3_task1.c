#include <stdio.h>
int main()
{
    int num, num2;
    puts("Введите целое число: \n");
    scanf("%d%d", &num, &num2);
    printf("Введены числа: %d, %d\n", num, num2);
    printf("Сумма чисел: %d\n", num2 + num);
    printf("Разность чисел: %d\n", num2 - num);
    printf("Частное: %d\n", num2 / num * 1);
    printf("Остаток: %d\n", num2 % num);
    return 0;
}