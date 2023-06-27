#include <stdio.h>
#include <string.h>
#include "81.h"


int main() {
    char string1[25] = "";
    char string2[25] = "";
    printf("Enter the string1: ");
    scanf("%s", string1);
    printf("Enter the string2: ");
    scanf("%s", string2);
    printf("%d",strend(string1, string2));
    return 0;
}