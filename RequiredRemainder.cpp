#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> x >> y >> n;
        cout << ((n-y)/x)*x+y << endl;
    }
    return 0;
}