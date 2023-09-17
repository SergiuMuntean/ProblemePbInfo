#include <stdio.h>
#include <stdlib.h>

void decimalToOctal()
{
    int integer;
    int Octal[100];
    int i = 0;
    printf("Please insert the integer number: ");
    scanf("%d", &integer);
    printf("The number in octal is: ");
    do
    {
        Octal[i] = integer % 8;
        integer = integer / 8;
        i++;
    }
    while (integer!=0);

     for(int j= i-1; j>=0; j--)
    {
        printf("%d", Octal[j]);
    }
    printf("\n");

}

void decimalToHexadecimal()
{
    int integer;
    int Hexadecimal[100];
    int i = 0;
    printf("Please insert the integer number: ");
    scanf("%d", &integer);
    printf("The number in hexadecimal is: ");
    do
    {
        Hexadecimal[i] = integer % 16;
        integer = integer / 16;
        i++;

    }
    while (integer!=0);

     for(int j= i-1; j>=0; j--)
    {
        if(Hexadecimal[j]>=0 && Hexadecimal[j] <=9)
            printf("%d", Hexadecimal[j]);
        else if(Hexadecimal[j] ==10)
            printf("%c" , 'A');
        else if(Hexadecimal[j] ==11)
            printf("%c" , 'B');
        else if(Hexadecimal[j] ==12)
            printf("%c" , 'C');
        else if(Hexadecimal[j] ==13)
            printf("%c" , 'D');
        else if(Hexadecimal[j] ==14)
            printf("%c" , 'E');
        else if(Hexadecimal[j] ==15)
            printf("%c" , 'F');
    }
}

int main()
{
    decimalToOctal();
    decimalToHexadecimal();
    return 0;
}
