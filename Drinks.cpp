#include <iostream>
using namespace std;
int main()
{
    int n;
    float f,s=0.0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
        s+=arr[i]/100.0;
    f=(s/n)*100;
    cout << f;
    return 0;
}