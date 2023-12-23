#include<iostream>
using namespace std;

void readArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void Insert(int a[], int &n){
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        if(a[i] % 2 == 1)
            cnt++;
    for(int j = n + cnt - 1, i = n - 1; j >= 0, i >= 0; j--, i--){
        if(a[i] % 2 == 1){
            a[j] = a[i] * 2;
            a[j - 1] = a[i];
            j--;
        }
        else
            a[j] = a[i];
    }
    n += cnt;
}

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    readArray(arr, size);
    Insert(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}