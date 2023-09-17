#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void HexadecimalToDecimal()
{
    int number = 0;
    int digits;
    int v[10];
    printf("Please insert how many digits you want your number to have: ");
    scanf("%d", &digits);
    for(int i=0; i<digits; i++)
    {
        printf("Enter the digit %d (beginning from units): ", i+1);
        scanf("%d", &v[i]);
        if(v[i]=='A')
            v[i]=10;
        else if(v[i]=='B')
            v[i]=11;
        else if(v[i]=='C')
            v[i]=12;
        else if(v[i]=='D')
            v[i]=13;
        else if(v[i]=='E')
            v[i]=14;
        else if(v[i]=='F')
            v[i]=15;
        number = number + pow(16,i)*v[i];
    }
    printf("Your number is ");
    for(int i=digits-1; i>=0 ;i--)
    {
        if(v[i]>=0 && v[i]<=9)
            printf("%d", v[i]);
        else if(v[i]==10)
            printf("%c", 'A');
        else if(v[i]==11)
            printf("%c", 'B');
        else if(v[i]==12)
            printf("%c", 'C');
        else if(v[i]==13)
            printf("%c", 'D');
        else if(v[i]==14)
            printf("%c", 'E');
        else if(v[i]==15)
            printf("%c", 'F');
    }
    printf("\nThe number in hexadecimal is %d", number);
}

int main()
{
    HexadecimalToDecimal();
    return 0;
}
