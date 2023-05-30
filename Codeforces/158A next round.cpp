#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,count=0;
    cin >> n>>k;

    int a[n];

    for(int i=1; i<=n; i++)
    {
        cin >>a[i];
    }

    for(int i=1; i<=n; i++)
    {
        if( a[i]>0 &&a[i]>=a[k])
            count++;
    }

    cout<<count;






}
