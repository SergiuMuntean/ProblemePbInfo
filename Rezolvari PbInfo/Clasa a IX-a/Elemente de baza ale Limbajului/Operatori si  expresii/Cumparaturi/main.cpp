#include <iostream>

using namespace std;

int main()
{
    int B,S; //B-pret bomboane, S- suma lui Gigel
    int C, P; // C numar cutii pe care le cumpara, P pret pentru inca o cutie
    cin >> B >> S;
    C = S / B;
    P = B - (S % B);
    cout << C << " " << P;
    return 0;
}
