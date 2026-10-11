#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int proverka(int n, int p) {
    if (n * p > 2000) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    setlocale(LC_CTYPE, "");
    int num1, num2, result;
    puts("Введите два двузначных натуральных числа:\n");
    scanf("%d%d", &num1, &num2);
    if ((num1 >= 10 && num1 <= 99) && (num2 >= 10 && num2 <= 99)) {
        result = proverka(num1, num2);
        printf("Превышает ли произведение двух чисел 2000? - %d\n", result);
    }
    else {
        printf("Ошибка ввода!");
        return -1;
    }
    system("pause");
    return 0;
}