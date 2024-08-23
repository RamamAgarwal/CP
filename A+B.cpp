#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int r,s=0;
        cin >> n;
        while(n!=0)
        {
            r=n%10;
            s=s+r;
            n/=10;
        }
        cout << s << endl; 
    }
    return 0;
}