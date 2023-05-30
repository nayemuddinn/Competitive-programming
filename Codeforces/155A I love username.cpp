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
    ll n,cnt=0;

    cin>>n;
    ll a[n];


    ll max,min ;

    For(i,n)
    cin>>a[i];

    max=a[0],min=a[0];

    For(i,n)
    {
        if(a[i]<min)
        {
            min=a[i];
            cnt++;
        }
        if(a[i]>max)
        {
            max=a[i];
            cnt++;
        }
    }

    cout<<cnt;


}

