#include <stdio.h>

int main() {
    char lowercase_string[100];
    char uppercase_string[100];
    int i;

    printf("Enter a lowercase letter string: ");
    scanf("%s", lowercase_string);

    for (i = 0; lowercase_string[i] != '\0'; i++) {
        uppercase_string[i] = lowercase_string[i] - 32;
    }

    printf("The uppercase letter string is: %s\n", uppercase_string);

    return 0;
}
