#include <stdio.h>

int main()
{
    float R = 10000.0; // начальная сумма
    float W = 5.0; // процент в месяц
    float K = 1 + W / 100.0; // коэффиент

    float mes1 = R * K; // сумма спустя 1 месяц
    float mes2 = mes1 * K; // сумма спустя 2 месяца
    float mes3 = mes2 * K; // сумма спустя 3 месяца
    float mes4 = mes3 * K;
    float mes5 = mes4 * K;
    float mes6 = mes5 * K; // сумма спустя 6 месяцев

    printf("Начальная сумма: %f руб.\n", R);
    printf("Процент в месяц: %f %%\n", W);
    printf("Через 2 месяца сумма равна: %.2f\n", mes2);
    printf("Через 3 месяца сумма равна: %.2f\n", mes3);
    printf("Через полгода сумма равна: %.2f\n", mes6);

    return 0;
}