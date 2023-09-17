#include <iostream>

using namespace std;

int main()
{
    int n,cnt=1,x,maxx=0,maxx2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>maxx)
        {
            maxx2=maxx;
            maxx=x;
        }
        else if(x>maxx2)
            maxx2=x;
    }
   	cout<<maxx<<" "<<maxx2;

    return 0;
}
