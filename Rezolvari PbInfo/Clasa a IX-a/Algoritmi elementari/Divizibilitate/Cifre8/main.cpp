#include <iostream>

using namespace std;

bool nrPrim(int n)
{
    if(n<2 || n%2==0 && n!=2)
        return false;
    for(int d=3; d*d<=n; d+=2)
    {
        if(n%d==0)
            return false;
    }
    return true;
}

int aparitii(int n, int cifra)
{
    int apar = 0;
    while(n)
    {
        if(n%10==cifra)
            apar++;
        n/=10;
    }
    return apar;
}

int unitateImpara(int n)
{
    int cifra = 0;
    if(n%10%2==1)
        cifra = n%10;
    return cifra;
}

bool imparitate(int n)
{
    if(n%10%2==1)
        return true;
    else
        return false;
}

int cmmdc(int a, int b)
{
    while(b)
    {
        int result = a%b;
        a = b;
        b = result;
    }
    return a;
}


int main()
{
    int number, c, apar = 0, nrCifreImpareUnit=0;
    int cat1=0, cat3=0, cat5=0, cat7=0, cat9=0;
    cin >> number >> c;
    long long suma = 0, x;
    for(int i=1; i<=number; i++)
    {
        cin >> x;
        if(nrPrim(x))
            suma+= x;
        apar+=aparitii(x,c);
        if(imparitate(x))
            nrCifreImpareUnit++;
        if(unitateImpara(x)==1)
            cat1++;
        if(unitateImpara(x)==3)
            cat3++;
        if(unitateImpara(x)==5)
            cat5++;
        if(unitateImpara(x)==7)
            cat7++;
        if(unitateImpara(x)==9)
            cat9++;
    }
    int result = cmmdc(cat1,cat3);
    int result1 = cmmdc(result,cat5);
    int result2 = cmmdc(result1,cat7);
    int resultFinal = cmmdc(result2,cat9);
    int nrDinV = nrCifreImpareUnit/resultFinal;
    cout << suma << '\n' << apar << '\n' << nrDinV;
    return 0;
}
