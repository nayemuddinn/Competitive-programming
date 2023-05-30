#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
    first_in_out

    ll a[3],max=0,min=1000;

    For(i,3)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];

    }

    ll mid=(max+min)/2;
    cout<<(max-mid)+(mid-min);



}
