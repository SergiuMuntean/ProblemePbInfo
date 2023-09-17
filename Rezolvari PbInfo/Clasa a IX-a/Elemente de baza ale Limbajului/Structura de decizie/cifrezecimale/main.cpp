#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    if(k>=1 && k<=20 && k%2!=0)
        cout << 1;
    else if(k>=21 && k<=40 && k%2!=0)
        cout << 2;
    else if(k>=41 && k<=60 && k%2!=0)
        cout << 3;
    else if(k>=61 && k<=80 && k%2!=0)
        cout << 4;
    else if(k>=81 && k<=100 && k%2!=0)
        cout << 5;
    else if(k>=101 && k<=120 && k%2!=0)
        cout << 6;
    else if(k>=121 && k<=140 && k%2!=0)
        cout << 7;
    else if(k>=141 && k<=160 && k%2!=0)
        cout << 8;
    else if(k>=161 && k<=180 && k%2!=0)
        cout << 9;
    else if(k%2==0 && k%20==2)
        cout << 0;
    else if(k%2==0 && k%20==4)
        cout << 1;
    else if(k%2==0 && k%20==6)
        cout << 2;
    else if(k%2==0 && k%20==8)
        cout << 3;
    else if(k%2==0 && k%20==10)
        cout << 4;
    else if(k%2==0 && k%20==12)
        cout << 5;
    else if(k%2==0 && k%20==14)
        cout << 6;
    else if(k%2==0 && k%20==16)
        cout << 7;
    else if(k%2==0 && k%20==18)
        cout << 8;
    else if(k%2==0 && k%20==0)
        cout << 9;
    return 0;
}
