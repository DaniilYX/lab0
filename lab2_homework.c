#include <stdio.h>

int main()
{
    // конкретные значения
    int X = 11; // возраст Коли
    int Y = 12; // возраст Миши
    float sred_age = (X + Y) / 2.0; // средний возраст
    float otlichie_Koli = sred_age - X; // разница по возрасту Коли от среднего значения
    float otlichie_Mishi = sred_age - Y; // разница по возрасту Миши от среднего значения
    printf("Данные:\nВозраст Коли: %dлет.\nВозраст Миши: %dлет.\n", X, Y);
    printf("Средний возраст: %.1fлет.\n", sred_age);
    printf("Отличие возраста Коли от среднего - %+.1fгода.\n", otlichie_Koli);
    printf("Отличие возраста Миши от среднего - %+.1fгода.\n", otlichie_Mishi);

    return 0;
}