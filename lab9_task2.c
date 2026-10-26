#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char a;
    do {
    int num, result = 0;
    printf("Введите произвольно длинное целое число:\n");
    scanf("%d", &num);

    int t1 = num % 10;
    result += 1;
    num = num / 10;

    while(num > 0) {
        int t2 = num % 10;
        if (t2 == t1) {
            result += 1;
        }
        num = num / 10;
    }

    printf("число повторений последней цифры %d в числе: %d\n", t1, result);
    printf("Продолжить? (Да - y, нет - n)\n");
    scanf(" %c", &a);
    } while(a == 'y');
    
    system("pause");
    return 0;
}