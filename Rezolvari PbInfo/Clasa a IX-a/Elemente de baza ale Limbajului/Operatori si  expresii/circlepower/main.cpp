#include <iostream>
#include <cmath>
using namespace std;

void DrawCircle()
{
    float r;
    cin >>r;
    for (int x = 0; x<2*r+2; x++)
    {
        for(int y = 0; y<2*r+2; y++)
        {
            if(floor(sqrt((x-r-1)*(x-r-1) + (y-r-1)*(y-r-1))) == r)
               cout <<"*";
               else cout<<" ";
        }
        cout <<  endl;
    }
}

int main()
{
    DrawCircle();
    return 0;
}
