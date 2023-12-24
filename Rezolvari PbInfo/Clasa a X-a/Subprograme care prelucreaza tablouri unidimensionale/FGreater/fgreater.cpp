#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("fgreater.in");
ofstream fout("fgreater.out");

void readArray(int a[], int n, int& x) {
    fin >> x;
    for(int i = 0; i < n; i++) {
        fin >> a[i];
    }
}

int FGreater(int a[], int n, int x) {
    int s1 = n - 1;
    for(int i = 0; i < s1; i++) {
        int s2 = i + 1;
        for(int j = s2; j < n; j++) {
            if(a[i] > a[j]) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    int detect = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > x) {
            detect = 1;
            return a[i];
        }
    }
    return -1;
}

int main() {
    int size, value;
    fin >> size;
    int* arr = new int[size];
    readArray(arr, size, value);
    int val = FGreater(arr, size, value);
    fout << val;
    return 0;
}