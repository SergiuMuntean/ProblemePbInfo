#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cout << setw(n-i) << left << '*'<< setw(i+1) << '*'<< "\n";
    for(int i=0; i<n; i++)
        cout << setw(n-i) << right << '*'<< setw(i+1) << '*'<< "\n";
    return 0;
}
