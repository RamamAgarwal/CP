#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    if(s.find("it")==true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    }
    return 0;
}