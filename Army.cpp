#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
        cin >> arr[i];
    int a,b,s=0;
    cin >> a >> b;
    int d=b-a;
    while(d--)
    {
        s+=arr[a-1];
        a++;
    }
    cout << s << endl;
    return 0;
}