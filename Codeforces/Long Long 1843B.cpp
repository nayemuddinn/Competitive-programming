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
        cin>>n;

        ll a[n];
        ll l=-1,r=0,sum=0,pos=0,ans=0;
        For(i,n)
        {
            cin>>a[i];

            sum+=abs(a[i]);

            if(l==-1 and a[i]<0)
                l=i;

            if(l!=-1 and a[i]<0)
                r=i;


        }

        if(l==-1 and r==0)
        {
            cout<<sum<<" "<<0<<ndl;;
            continue;
        }

        for(ll i=l ; i<=r;  i++)
        {
            if(a[i]>0)
                pos++;
            else if(a[i]<0 and pos!=0)
            {
                ans++;
                pos=0;
            }
        }
        ans++;

        cout<<sum<<" "<<ans<<ndl;


    }



}

