#include <stdio.h>
#include <math.h>

int hexadecimalToDecimal(char* string)
{
    int len = strlen(string);
    int number = 0;

    for (int i = 0; i < len; ++i)
    {
        char c;

        if (c >= '0' && c <= '9')
        {
            c -= '0';
        }
        else if (c >= 'A' && c <= 'F')
        {
            c -= 'A' - 10;
        }
        else
        {
            printf("Number is not hexadecimal\n");
            return 0;
        }

        number += pow(16, len-i-1) * c;
    }

    return number;
}

int main()
{
    printf("Enter hexadecimal number: ");
    char string[1024];
    scanf("%s", string);

    int val = hexadecimalToDecimal(string);

    printf("Decimal number is: %d\n", val);

    return 0;
}
