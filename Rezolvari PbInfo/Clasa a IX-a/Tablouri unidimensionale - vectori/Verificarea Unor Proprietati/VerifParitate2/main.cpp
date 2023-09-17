#include <iostream>

using namespace std;

void readArray(int* sir, int& dimensiune)
{
    cin >> dimensiune;
    for(int i=0; i<dimensiune; i++)
        cin >> sir[i];
}

void checker(int* sir, int dimensiune)
{
    int value = 1;
    for(int i=0; i<dimensiune/2; i++)
        if(sir[i]%2==sir[dimensiune-1-i]%2)
        {
            value = 0;
            break;
        }
    if(value == 1)
        cout << "DA";
    else if(value == 0)
        cout << "NU";
}

int main()
{
    int arr[200], n;
    readArray(arr, n);
    checker(arr, n);
    return 0;
}
