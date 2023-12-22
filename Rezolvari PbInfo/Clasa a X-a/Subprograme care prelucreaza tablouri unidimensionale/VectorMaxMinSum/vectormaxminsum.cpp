#include<iostream>
using namespace std;

void readArray(int* arr, int& dim) {
    cin >> dim;
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

void P(int x[], int n, int& mini, int& maxi, int& sum) {
    mini = 99999999;
    for(int i = 0; i < n; i++) {
        if(x[i] < mini) {
            mini = x[i];
        }
    }
    maxi = -99999999;
    for(int i = 0; i < n; i++) {
        if(x[i] > maxi) {
            maxi = x[i];
        }
    }
    sum = 0;
    for(int i = 0; i < n; i++) {
        sum += x[i];
    }
}

int main() {
    int arr[100], dim, mini, maxi, sum;
    readArray(arr, dim);
    P(arr, dim, mini, maxi, sum);
    cout << mini << ' ' << maxi << ' ' << sum;
    return 0;
}