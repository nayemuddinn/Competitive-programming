/**
.
  author->  NATE
.
**/

#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl               "\n"
#define ll                 long long int

int main()
{
    first_in_out


    ll t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n];
        For(i,n)
        cin>>a[i];

        ll min=999999;

        For(i,n-1)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(abs(a[i]-a[j])<min)
                    min=abs(a[i]-a[j]);
            }
        }

        cout<<min<<ndl;


    }


}

