#include <iostream>

using namespace std;

int main()
{
    int z, l, a;
    cin >> z >> l >> a;
    if(a>=1850 &&a<=2500)
    {
        if(l>=1 && l<=12)
        {
            if(l==1 || l==3 || l==5 || l==7 || l==8 || l==10 || l==12)
            {
                if(z>=1 && z<=31)
                    cout << "DA";
                    else cout << "NU";
            }
            else if(l==2)
            {
                if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
                {
                    if(z>=1 && z<=29)
                        cout <<"DA";
                        else cout<<"NU";
                }
                else
                {
                    if(z>=1 && z<=28)
                        cout << "DA";
                    else cout << "NU";
                }
            }
            else  if(l==4 || l==6 || l==9 || l==11)
            {
                if(z>=1 && z<=30)
                    cout << "DA";
                    else cout << "NU";
            }
            else
                cout <<"NU";
        }
        else cout <<"NU";
    }
    else cout << "NU";
    return 0;
}
