#include <iostream>

using namespace std;

int countEvenDivisors(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0 && i % 2 == 0 && i*i<num)
            count++;
        if (num/i%2 == 0 && num%i==0 && i*i<num)
            count++;
        if(i*i==num && num%i==0)
            count++;
    }
    return count;

}
int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int NRD_MAX = 0;
    int MIN = 0;
    int MAX = 0;

    for (int x = a; x <= b; x++) {
        int NRD = countEvenDivisors(x);

        if (NRD > NRD_MAX) {
            NRD_MAX = NRD;
            MIN = x;
            MAX = x;
        } else if (NRD == NRD_MAX) {
            if (x < MIN) {
                MIN = x;
            }
            if (x > MAX) {
                MAX = x;
            }
        }
    }

    cout << NRD_MAX << " " << MIN << " " << MAX << endl;

    return 0;
}

