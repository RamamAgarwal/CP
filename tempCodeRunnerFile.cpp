#include <iostream>
using namespace std;
int main()
{
    long long int n,k,cnt,t;
    cin >> n >> k;
    cnt = (n+1)/2;
    if(k<=cnt)
        t=2*t-1;
    else
        t=2*(k-cnt);
    cout << t;
    return 0;
}