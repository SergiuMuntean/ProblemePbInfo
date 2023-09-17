#include <iostream>

using namespace std;

void readArray(int* sir, int& dimensiune)
{
    cin >> dimensiune;
    for(int i=0; i<dimensiune; i++)
        cin >> sir[i];
}

void checker(int* sir1, int* sir2, int dimensiune1, int dimensiune2)
{
    for(int j=0; j<dimensiune2; j++)
    {
        int value = 0;
        for(int i=0; i<dimensiune1; i++)
        {
            if(sir2[j]==sir1[i])
            {
                value = 1;
                cout << 1 << ' ';
                break;
            }
        }
        if(value == 0)
            cout << 0 << ' ';
    }
}
int main()
{
    int arr1[1000], arr2[1000], n1, n2;
    readArray(arr1, n1);
    readArray(arr2, n2);
    checker(arr1, arr2, n1, n2);
    return 0;
}
