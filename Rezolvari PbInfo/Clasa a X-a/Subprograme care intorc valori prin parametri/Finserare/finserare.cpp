#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

ifstream fin("finserare.in");
ofstream fout("finserare.out");

void inserare(int& n) {
    int arr[20];
    int size = 0;
    while(n) {
        arr[size++] = n % 10;
        n /= 10;
        size++;
    }

    for(int i = 0; i < size - 2; i = i + 2) {
        arr[i + 1] = abs(arr[i] - arr[i + 2]);
    }

    n = 0;
    for(int i = size - 1; i >= 0; i--) {
        n = n * 10 + arr[i];
    }
}

int main() {
    int number;
    fin >> number;
    inserare(number);
    fout << number;
}