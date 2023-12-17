#include<stdio.h>

int TreiCifImp(int n) {
    int counter = 0;
    while(n) {
        if(n % 10 % 2 == 1) {
            int value = n % 10 % 2;
            n /= 10;
            int newValue = n % 10 % 2;    
            if(value == newValue) {
                counter++;
                if(counter == 2) {
                    return 1;
                }
            }
        }
        else {
            counter = 0;
            n /= 10;
        }
    }
    return 0;
}

int main() {
    FILE *f, *g;
    int number;
    f = fopen("treicifimp.in", "r");
    fscanf(f, "%d", &number);
    fclose(f);
    g = fopen("treicifimp.out", "w");
    fprintf(g, "%d", TreiCifImp(number));
    fclose(g);
}