#include <stdio.h>
#include <stdlib.h>

void hexadecimalToDecimal()
{
    int number;
    printf("Please input your number in hexadecimal: ");
    scanf("%x", &number);
    printf("The number in decimal is: %d", number);
}
int main()
{
    hexadecimalToDecimal();
    return 0;
}
