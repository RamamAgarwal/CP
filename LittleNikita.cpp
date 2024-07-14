#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        int n,m;
        cin >> n >> m;
        if(n>=m and (n-m)%2==0)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}
