#include <iostream>

using namespace std;

void readArray(int sir[], int& dimensiune)
{
    cin >> dimensiune;
    for(int i=0; i<dimensiune; i++)
        cin >> sir[i];
}

void extragereElementePare(int sir[], int sir_nou[], int dimensiune, int& dimensiune_nou)
{
    int j =0;
    for(int i=0; i<dimensiune; i++)
        if(sir[i]%2==0)
        {
            sir_nou[j++] = sir[i];
        }
    dimensiune_nou = j;
}

void checker(int sir[], int dimensiune)
{
    int value = 1;
    for(int i=1; i<dimensiune; i++)
        if(sir[i-1]>sir[i])
        {
            value = 0;
            break;
        }
    if(value==1)
        cout << "DA";
    else if (value==0)
        cout << "NU";
}

int main()
{
    int arr[100], n, arr_nou[100], n_nou;
    readArray(arr, n);
    extragereElementePare(arr, arr_nou, n, n_nou);
    checker(arr_nou, n_nou);
    return 0;
}
