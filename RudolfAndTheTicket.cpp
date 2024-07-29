#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n,m,k;
    cin >> n >> m >> k;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
        cin >> arr1[i];
    for(int i=0;i<m;i++)
        cin >> arr2[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]+arr2[j]<=k)
                c++;
        }
    }
    cout << c << endl;
    }
    return 0;
}