#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a%b==0)
        { 
            cout << 0 << endl;
        }
        else if(a>b and a%b!=0)
        {
            cout << abs(abs(((a/b)*b) - a) - b) << endl;
        }
        else
        {
            cout << b - a << endl;
        }
    }
    return 0;
}