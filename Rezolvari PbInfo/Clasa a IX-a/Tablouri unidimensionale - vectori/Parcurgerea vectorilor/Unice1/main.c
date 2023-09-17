#include <stdio.h>
#include <stdlib.h>

FILE *f, *g;
void readArray(int *frecventa, int *size, int value)
{
    fscanf(f, "%d", size);
    for(int i=0; i<*size; i++)
    {
        fscanf(f,"%d", &value);
        frecventa[value]==1;
    }
}

int afisareFrecventa(int *frecventa, int size, int value)
{
    int contor = 0;
    for(int i=0; i<10001; i++)
        if(frecventa[i]==0)
            contor++;
    return contor;
}

int main()
{
    int n, fr[1000001], valoare;
    f=fopen("unice1.in", "r");
    g=fopen("unice1.out", "w");
    readArray(fr, &n, valoare);
    fprintf(g, "%d", afisareFrecventa(fr, n, valoare));
    fclose(f);
    fclose(g);
    return 0;
}
