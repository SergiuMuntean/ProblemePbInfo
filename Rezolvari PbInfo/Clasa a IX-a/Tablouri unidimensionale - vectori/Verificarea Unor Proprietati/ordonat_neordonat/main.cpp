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
    int value = 0, valueStrictDescr = 0, valueConst = 0;
    int valueCresc = 0, valueDescr = 0;
    for(int i=0; i<dimensiune-1; i++)
    {
        if(sir[i]<sir[i+1])
            value++;
        if(sir[i]>sir[i+1])
            valueStrictDescr++;
        if(sir[i]==sir[i+1])
            valueConst++;
        if(sir[i]<=sir[i+1])
            valueCresc++;
        if(sir[i]>=sir[i+1])
            valueDescr++;
    }
    if(value==dimensiune-1)
        cout << "sir strict crescator";
    else if(valueStrictDescr==dimensiune-1)
        cout << "sir strict descrescator";
    else if(valueConst==dimensiune-1)
        cout << "sir constant";
    else if(valueCresc==dimensiune-1)
        cout << "sir crescator";
    else if(valueDescr==dimensiune-1)
        cout << "sir descrescator";
    else
        cout << "sir neordonat";
}


int main()
{
    int arr[1000], n;
    readArray(arr, n);
    checker(arr, n);
    return 0;
}
