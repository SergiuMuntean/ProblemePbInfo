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
    int check = 1;
    for(int i=0; i<dimensiune-1; i++)
    {
        if(sir[i]%sir[dimensiune-1]!=0)
        {
            check = 0;
            break;
        }
    }
    if(check == 1)
        cout << "DA";
    else if(check == 0)
        cout << "NU";
}

int main()
{
    int arr[100], n;
    readArray(arr, n);
    checker(arr, n);
    return 0;
}
