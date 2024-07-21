#include<iostream>
#include<climits> // Add this line to include the <climits> header file
using namespace std;
int main()
{
    int n,mn=INT_MAX;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mn=min(abs(arr[i]),mn);
    }
    cout << mn;
    return 0;
}