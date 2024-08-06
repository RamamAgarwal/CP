#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int min=INT_MAX;
        int ind=0;
        long long int p=1;
        for(int i=0;i<n;i++)
        {
            if(min>arr[i]){
                min=arr[i];
                ind=i;}
        }
        arr[ind]=min+1;
        for(int i=0;i<n;i++)
        {
            p*=arr[i];
        }
        cout << p << endl;
    }
    return 0;
}