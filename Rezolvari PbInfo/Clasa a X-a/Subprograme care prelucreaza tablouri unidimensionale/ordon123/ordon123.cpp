#include<iostream>
using namespace std;

void readArray(int arr[], int dim) {
    for(int i = 0; i < dim; i++) {
        cin >> arr[i];
    }
}

void ordon123(int n, int a[]) {
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            cnt1++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == 2) {
            cnt2++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == 3) {
            cnt3++;
        }
    }
    for(int i = 0; i < cnt1; i++) {
        a[i] = 1;
    }
    for(int i = cnt1; i < cnt1 + cnt2; i++) {
        a[i] = 2;
    }
    for(int i = cnt1 + cnt2; i < n; i++) {
        a[i] = 3;
    }
}


int main() {
    int dim;
    cin >> dim;
    int* arr = new int[dim];
    readArray(arr, dim);
    ordon123(dim, arr);
    for(int i = 0; i < dim; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}