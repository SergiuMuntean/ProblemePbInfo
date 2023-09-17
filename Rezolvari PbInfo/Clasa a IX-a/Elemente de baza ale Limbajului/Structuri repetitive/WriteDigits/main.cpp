#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        switch(a)
        {
        case 1:
            {
                cout << "  @" << endl;
                cout << " @@" << endl;
                cout << "  @" << endl;
                cout << "  @" << endl;
                cout << "@@@@@"<< endl;
                cout << endl;
                break;
            }
        case 2:
            {
                cout << "@@@@" << endl;
                cout << "@  @" << endl;
                cout << "  @" << endl;
                cout << " @" << endl;
                cout << "@@@@" << endl;
                cout << endl;
                break;
            }
        case 3:
            {
                cout << "@@@@@" << endl;
                cout << "    @" << endl;
                cout << "@@@@@" << endl;
                cout << "    @" << endl;
                cout << "@@@@@" << endl;
                cout << endl;
                break;
            }
        case 4:
            {
                cout << "@   @" << endl;
                cout << "@   @" << endl;
                cout << "@@@@@" << endl;
                cout << "    @" << endl;
                cout << "    @" << endl;
                cout << endl;
                break;
            }
        case 5:
            {
                cout << "@@@@@" << endl;
                cout << "@" << endl;
                cout << "@@@@@" << endl;
                cout << "    @" << endl;
                cout << "@@@@@" << endl;
                cout << endl;
                break;
            }
        case 6:
            {
                cout << "@@@@@" << endl;
                cout << "@" << endl;
                cout << "@@@@@" << endl;
                cout << "@   @" << endl;
                cout << "@@@@@" << endl;
                cout << endl;
                break;
            }
        case 7:
            {
                cout << "@@@@" << endl;
                cout << "   @" << endl;
                cout << "  @@@" << endl;
                cout << "   @" << endl;
                cout << "   @" << endl;
                cout << endl;
                break;
            }
        case 8:
            {
                cout << "@@@@@" << endl;
                cout << "@   @" << endl;
                cout << "@@@@@" << endl;
                cout << "@   @" << endl;
                cout << "@@@@@" << endl;
                cout << endl;
                break;
            }
        case 9:
        {
                cout << "@@@@@" << endl;
                cout << "@   @" << endl;
                cout << "@@@@@" << endl;
                cout << "    @" << endl;
                cout << "    @" << endl;
                cout << endl;
                break;
        }
        case 0:
            {
                cout << "@@@@@" << endl;
                cout << "@   @" << endl;
                cout << "@   @" << endl;
                cout << "@   @" << endl;
                cout << "@@@@@" << endl;
                cout << endl;
                break;
            }

        }
    }
    return 0;
}
