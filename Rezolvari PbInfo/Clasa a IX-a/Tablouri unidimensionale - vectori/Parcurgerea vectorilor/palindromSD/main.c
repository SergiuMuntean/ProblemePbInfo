#include<stdio.h>
#include<stdlib.h>

FILE *f, *g;

int numarPalindrom(int number)
{
    int rasturnat = 0;
    int value = number;
    while(number)
    {
        rasturnat = rasturnat * 10 + number % 10;
        number/=10;
    }
    if(rasturnat == value)
        return 1;
    else
        return 0;
}

void citirePalindroame(int* array, int value, int* size)
{
    *size = 0;
    while(fscanf(f,"%d",&value)!=EOF)
    {
        if(numarPalindrom(value)==1)
        {
            array[*size]=value;
            *size= *size+1;
        }
    }
}

void parcurgerePalindroame(int* array, int size)
{
    if(size==0)
    fprintf(g,"-1");
    for(int i=0, j = size-1; i<=j; i++, j--)
    {
        fprintf(g, "%d ", array[i]);
        if(i!=j)
            fprintf(g, "%d ", array[j]);
    }
}

int main()
{
    int palindroame[1000], valoare, n;
    f = fopen("palindromsd.in", "r");
    g = fopen("palindromsd.out", "w");
    citirePalindroame(palindroame, valoare, &n);
    parcurgerePalindroame(palindroame, n);
    fclose(f);
    fclose(g);
    return 0;
}
