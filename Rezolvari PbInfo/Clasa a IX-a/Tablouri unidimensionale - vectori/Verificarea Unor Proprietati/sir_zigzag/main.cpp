#include <iostream>

using namespace std;

void readArray(int sir[], int& dimensiune)
{
    cin >> dimensiune;
    for(int i=0; i<dimensiune; i++)
        cin >> sir[i];
}

void checker(int* sir, int dimensiune)
{
    int value = 1;
    int i = 0;
    if(sir[i]<sir[i+1])
    {
        for(int i=1; i<dimensiune-1; i++)
        {
            if(i%2==1 && sir[i]<=sir[i+1])
            {
                value = 0;
                break;
            }
            else if(i%2==0 && sir[i]>=sir[i+1])
            {
                value = 0;
                break;
            }
        }
    }
    i = 0;
    if(sir[i]>sir[i+1])
    {
        for(int i=1; i<dimensiune-1; i++)
        {
            if(i%2==1 && sir[i]>=sir[i+1])
            {
                value = 0;
                break;
            }
            else if(i%2==0 && sir[i]<=sir[i+1])
            {
                value = 0;
                break;
            }
        }
    }
    i = 0;
    if(sir[i]==sir[i+1])
        value = 0;
    if(value==1)
        cout << "DA";
    else if (value==0)
        cout << "NU";
}

int main()
{
    int arr[1000], n;
    readArray(arr, n);
    checker(arr, n);
    return 0;
}
