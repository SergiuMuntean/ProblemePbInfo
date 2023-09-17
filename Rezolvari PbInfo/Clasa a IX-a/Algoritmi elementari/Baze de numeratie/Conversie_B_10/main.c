#include <stdio.h>
#include <math.h>
FILE *f, *g;
int conversieB10(int n)
{
    int a = 0, b;
    int i = 0;
    fscanf(f,"%d", &b);
    fclose(f);
    while(n)
    {
        a += n%10*pow(b,i);
        n/=10;
        i++;
    }
    return a;
}

int main()
{
    int number;
    f = fopen("conversie_b_10.in", "rt");
    fscanf(f, "%d", &number);
    g = fopen("conversie_b_10.out", "wt");
    fprintf(g, "%d", conversieB10(number));
    fclose(g);
    return 0;
}
