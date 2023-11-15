#include<stdio.h>

int arr[1000];

int main() {
    int dim, x, y = 0, z = 0;
    int found = 0;
    scanf("%d", &dim);
    for(int i = 0; i < dim; i++) {
        scanf("%d", &x);
        if(x < 1000) {
            arr[x] = 1;
        }
    }

    for(int i = 999; i >= 100; i--) {
        if(y != 0 && arr[i] == 0) {
            z = i;
            found++;
            break;
        }
        if(arr[i] == 0) {
            y = i;
            found++;
        }
    }

    if(found == 2) {
        printf("%d %d", z, y);
    }
    else if(found < 2) {
        printf("NU EXISTA");
    }
}