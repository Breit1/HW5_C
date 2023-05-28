#include <stdio.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя
};

float averageAge(struct Person* arr, int n) {
    int i;
    int sum = 0;
    
    // Суммируем возрасты всех людей в массиве с использованием указателей
    for (i = 0; i < n; i++) {
        sum += (arr + i)->age;
    }
    
    // Вычисляем средний возраст
    float average = (float)sum / n;
    
    return average;
}

int main() {
    int i, n;
    
    // Вводим количество людей
    printf("Введите количество людей: ");
    scanf("%d", &n);
    
    // Создаем массив структур Person и вводим данные о каждом человеке
    struct Person people[n];
    for (i = 0; i < n; i++) {
        printf("Введите имя %d-го человека: ", i + 1);
        scanf("%s", (people + i)->name);
        
        printf("Введите возраст %d-го человека: ", i + 1);
        scanf("%d", &(people + i)->age);
    }
    
    // Вызываем функцию averageAge с передачей указателя на массив структур и выводим результат
    float avg = averageAge(people, n);
    printf("Средний возраст: %.2f\n", avg);

    return 0;
}
