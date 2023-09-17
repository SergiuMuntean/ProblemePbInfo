#include <iostream>

using namespace std;

void readArray(int* sir, int dimensiune)
{
    for(int i=0; i<dimensiune; i++)
        cin >> sir[i];
}

void checker(int* sir, int* sir2, int dimensiune)
{
    int value = 0;
    for(int i=0; i<dimensiune; i++)
    {
        for(int j=0; j<dimensiune; j++)
        {
            if(sir[i]==sir2[j])
            {
                value++;
                sir2[j] = -1;
                break;
            }
        }
    }
    if(value==dimensiune)
        cout << "DA";
    else
        cout << "NU";
}

int main()
{
    int arr[1000], arr1[1000], n;
    cin >> n;
    readArray(arr, n);
    readArray(arr1, n);
    checker(arr, arr1, n);
    return 0;
}
