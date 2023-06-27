#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "82.h"

#define MAX_LENGTH 100

int main() {
    int num_strings, string_length;
    char **strings;

    printf("Enter number of strings: ");
    scanf("%d", &num_strings);
    printf("Enter the length of the line: ");
    scanf("%d", &string_length);
    // выделение памяти для указателей на строки
    strings = (char **)malloc(num_strings * sizeof(char *));

    // выделение памяти для каждой строки
    for (int i = 0; i < num_strings; ++i) {
        strings[i] = (char *)malloc((string_length + 1) * sizeof(char));
    }

    for (int i = 0; i < num_strings; ++i) { // чтение строк
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    ShellSort(strings, num_strings, string_length); // Сортировка
    
    for (int i = 0; i < num_strings; ++i) {     // вывод строк
        printf("%sn\n", strings[i]);
    }
    
    for (int i = 0; i < num_strings; ++i) { // освобождение памяти
        free(strings[i]);
    }
    free(strings);

    return 0;
}