#include<iostream>
using namespace std;

void readArray(int* arr, int dim) {
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

int EliminaElemente(int a[], int n, int m) {
    int arr[1000];
    for(int i = 0; i < 1000; i++) {
        arr[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        int value = a[i];
        arr[value]++;
    }
    int result = n;
    int valsEliminated = 0;
    for(int i = 0; i < n; i++) {
        if(arr[a[i]] == 1 && m > 0) {
            valsEliminated++;
            m--;
        }
    }
    for(int i = 0; i < 1000; i++) {
        if(arr[i] > 1) {
            arr[i] = 1;
        }
    }
    int contor = 0;
    for(int i = 0; i < 1000; i++) {
        if(arr[i] == 1) {
            contor++;
        }
    }
    result = contor - valsEliminated;
    return result;
}

int main() {
    int arr[10000], dim, m;
    cin >> dim >> m;
    readArray(arr, dim);
    int value = EliminaElemente(arr, dim, m);
    cout << value;
    return 0;
}