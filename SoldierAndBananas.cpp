#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int s=0;
    while(w>0){
        s+=w*k;
        w--;}
    if((s-n)<=0)
    cout << 0 << endl;
    else
    cout << s-n << endl;
    return 0;
}