#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);

int main()
{
    int number1, number2, number3;
    printf("Please insert your 3 numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    printf("The maximum between the 3 numbers is: %d", maximum(number1, number2, number3));

    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;
    if(y>max)
        max = y;
    if(z>max)
        max = z;
    return max;
}
