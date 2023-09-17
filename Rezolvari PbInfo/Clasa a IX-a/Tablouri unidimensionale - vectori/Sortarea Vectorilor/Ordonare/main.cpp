#include <iostream>

using namespace std;

void readArray(int* sir, int& dimensiune)
{
    cin >> dimensiune;
    for(int i=0; i<dimensiune; i++)
        cin >> sir[i];
}

void sortArray(int* sir, int dimensiune)
{
    bool sortat;
    do
    {
        sortat = true;
        for(int i=0; i<dimensiune-1; i++)
        {
            if(sir[i]>sir[i+1])
            {
                sortat = false;
                int aux = sir[i];
                sir[i] = sir[i+1];
                sir[i+1] = aux;
            }
        }
        dimensiune --;
    }while(!sortat);
}

void printArray(int* sir, int dimensiune)
{
    for(int i=0; i<dimensiune; i++)
        cout << sir[i] << ' ';
}


int main()
{
    int arr[1000], n;
    readArray(arr, n);
    sortArray(arr, n);
    printArray(arr, n);
    return 0;
}
