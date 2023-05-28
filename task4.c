#include <stdio.h>

// Функция для нахождения наибольшего общего делителя
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Функция для сокращения дроби по указателям
void reduce_fraction(int* a, int* b) {
    int common_divisor = gcd(*a, *b);

    // Сокращаем дробь, деля числитель и знаменатель на НОД
    *a /= common_divisor;
    *b /= common_divisor;
}

int main() {
    int numerator, denominator;

    // Ввод числителя и знаменателя
    printf("Введите числитель: ");
    scanf("%d", &numerator);
    printf("Введите знаменатель: ");
    scanf("%d", &denominator);

    // Вызываем функцию reduce_fraction
    reduce_fraction(&numerator, &denominator);

    // Вывод сокращенной дроби
    printf("Сокращенная дробь: %d/%d\n", numerator, denominator);

    return 0;
}
