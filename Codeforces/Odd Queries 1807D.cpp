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

    ll t,q,n,l,r,k,sum;
    cin>>t;

    while(t--)
    {
        cin>>n>>q;

        ll a[n],b[n+1];
        sum=0;
        b[0]=0;

        For(i,n)
        {
            cin>>a[i];
            b[i+1]=b[i]+a[i];

        }


        while(q--)
        {

            cin>>l>>r>>k;

            sum=b[n]-b[r]+b[l-1];
            k=(r-l+1)*k;
            sum=sum+k;

            if(sum%2!=0)
                cout<<"YES"<<ndl;
            else
                cout<<"NO"<<ndl;
        }
    }



}

