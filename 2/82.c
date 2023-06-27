#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "82.h"





void ShellSort(char** arr, int num_strings, int string_length) {
    int gap = num_strings / 2;
    while (gap > 0) {      
        for (int i = gap; i < num_strings; i++) {
            char temp[string_length];
            strcpy(temp, arr[i]);               
            int j;
            for (j = i; j >= gap && strlen(arr[j - gap]) > strlen(temp); j -= gap) {
                strcpy(arr[j], arr[j - gap]);     
            }
            strcpy(arr[j], temp);
        }
        gap /= 2;
    }
}