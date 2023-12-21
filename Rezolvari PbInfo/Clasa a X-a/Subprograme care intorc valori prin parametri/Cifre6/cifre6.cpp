#include<iostream>
using namespace std;

void numar(int n, int k, int& result) {
    int arr[10];
    int size = 0;
    while(n) {
        arr[size++] = n % 10;
        n /= 10;
    }

    int s1 = size - 1;
    for(int i = 0; i < s1; i++) {
        int s2 = i + 1;
        for(int j = s2; j < size; j++) {
            if(arr[i] < arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    result = 0;
    for(int i = 0; i < k; i++) {
        result = result * 10 + arr[i];
    }
}

int main() {
    int number, k, result;
    cin >> number >> k;
    numar(number, k, result);
    cout << result;
    return 0;
}