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
#define For3(i, j, n)      for (int i = j; i <= n; i++)
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())


int main()
{
    first_in_out

    ll t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>x;

        ll a[2*n],f=0;

        For(i,2*n)
        cin>>a[i];

        sort(a,a+2*n);

        ll j=n;

        For(i,n)
        {

            if(a[j]-a[i]<x)
            {
                f=1;
                break;
            }
            j++;
        }

        if(f==1)
            cout<<"NO"<<ndl;
        else
            cout<<"YES"<<ndl;


    }



}

