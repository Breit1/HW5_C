#include <stdio.h>

void swapHalves(int arr[], int size) {
    int i, temp;
    int k = size / 2;  // Находим половину массива

    // Меняем местами элементы первой и второй половин массива
    for (i = 0; i < k; i++) {
        temp = arr[i];
        arr[i] = arr[i + k];
        arr[i + k] = temp;
    }
}

int main() {
    int N, i;
    
    // Вводим размер массива
    printf("Введите длину массива: ");
    scanf("%d", &N);
    
    // Создаем массив и вводим его элементы
    int arr[N];
    printf("Введите элементы массива: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Вызываем функцию для обмена половин массива
    swapHalves(arr, N);

    // Выводим полученный массив
    printf("Новый массив: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
