#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "hELLO";
    int n = 5; // Kontroluje prvých n znakov

    int result = strncasecmp(str1, str2, n);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than string 2.\n");
    } else {
        printf("String 1 is greater than string 2.\n");
    }

    return 0;
}