#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n,m;
    cin >> n >> m;
    cout << m % int(pow(2,n));
    return 0;
}