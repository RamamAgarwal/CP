#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        cout << round(double(n)/x) + 1 << endl;
    }
    return 0;
}