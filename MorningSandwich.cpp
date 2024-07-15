#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int b,c,h,res=0;
    cin >> b >> c >> h;
    if(b-1>c+h)
        res = 2*(c+h)+1;
    else
        res = 2*(b-1)+1;
    cout << res << endl;
    }
    return 0;
}