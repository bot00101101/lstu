#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_LENGTH 100

typedef struct {
    char title[MAX_LENGTH];
    float price;
    unsigned int number;
} Book;

void setOrGetElement(Book* arr, int size) {
    int index, choice;

    printf("\n2. Установка/получение информации о книге по индексу.\n");
    printf("Введите индекс элемента: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Ошибка: Неверный индекс!\n");
        return;
    }

    printf("Введите номер операции, 1 - установка, 2 - получение: ");
    scanf("%d", &choice);

    // Очистка буфера ввода
    getchar();

    if (choice == 1) {
        printf("Введите новое название книги: ");
        fgets(arr[index].title, MAX_LENGTH, stdin);
        arr[index].title[strcspn(arr[index].title, "\n")] = '\0'; // Удаляем символ новой строки
        printf("Введите новую цену: ");
        scanf("%f", &arr[index].price);
        printf("Введите новый номер: ");
        scanf("%u", &arr[index].number);
    }
    else if (choice == 2) {
        printf("{%s, %.2f, %u}\n", arr[index].title, arr[index].price, arr[index].number);
    }
    else {
        printf("Ошибка: Неверная операция!\n");
    }
}
void searchElement(Book* arr, int size) {
    float value;
    int found = 0;

    printf("\n3. Поиск книги по цене.\n");
    printf("Введите цену для поиска: ");
    scanf("%f", &value);

    for (int i = 0; i < size; ++i) {
        if (arr[i].price == value) {
            printf("Книга найдена. Индекс элемента: %d, значения полей: {%s, %.2f, %u}\n", i, arr[i].title, arr[i].price, arr[i].number);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Книга не найдена.\n");
    }
}

void swapElements(Book* arr, int size) {
    int index1, index2;

    printf("\n4. Обмен информацией о двух книгах.\n");
    printf("Введите индекс первой книги: ");
    scanf("%d", &index1);
    if (index1 < 0 || index1 >= size) {
        printf("Ошибка: Неверный индекс первой книги!\n");
        return;
    }

    printf("Введите индекс второй книги: ");
    scanf("%d", &index2);
    if (index2 < 0 || index2 >= size || index1 == index2) {
        printf("Ошибка: Неверный индекс второй книги!\n");
        return;
    }

    Book temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;

    printf("Результирующий массив:\n");
    for (int i = 0; i < size; ++i) {
        printf("{%s, %.2f, %u}\n", arr[i].title, arr[i].price, arr[i].number);
    }
}

void sortElements(Book* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j].price > arr[j + 1].price) {
                Book temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n5. Сортировка книг по цене по возрастанию.\n");
    printf("Массив, отсортированный по цене по возрастанию:\n");
    for (int i = 0; i < size; ++i) {
        printf("{%s, %.2f, %u}\n", arr[i].title, arr[i].price, arr[i].number);
    }
}

void printElement(Book* arr, int size) {
    int index;

    printf("\n6. Вывод информации о книге.\n");
    printf("Введите индекс книги для вывода: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Ошибка: Неверный индекс книги!\n");
        return;
    }

    printf("{%s, %.2f, %u}\n", arr[index].title, arr[index].price, arr[index].number);
}

int main() {
    setlocale(LC_ALL, "Russian");

    int size;
    printf("Введите количество книг в магазине: ");
    scanf("%d", &size);

    Book* books = (Book*)malloc(size * sizeof(Book));
    if (books == NULL) {
        printf("Ошибка: Недостаточно памяти!\n");
        return 1;
    }

    for (int i = 0; i < size; ++i) {
        printf("Введите название книги для элемента %d: ", i);
        scanf("%s", books[i].title);
        printf("Введите цену для элемента %d: ", i);
        scanf("%f", &books[i].price);
        printf("Введите номер для элемента %d: ", i);
        scanf("%u", &books[i].number);
    }

    setOrGetElement(books, size);
    searchElement(books, size);
    swapElements(books, size);
    sortElements(books, size);
    printElement(books, size);

    free(books);
    return 0;
}