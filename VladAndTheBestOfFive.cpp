#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(count(s.begin(),s.end(),'A')>2)
            cout << "A\n";
        else
            cout << "B\n";
    }
    return 0;
}