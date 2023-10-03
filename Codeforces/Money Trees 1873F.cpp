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
#define For4(i,n)          for(int i=n-1; i>=0; i--)
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())


int main()
{
    first_in_out

    ll t,n,k,m1,m2,ans,c,mid;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        ll a[n],h[n],f[n+1],l[n];
        f[0]=0;
        ans=0;

        For(i,n)
        {
            cin>>a[i];
            f[i+1]=f[i]+a[i];
        }

        if(a[n-1]<=k)
            l[n-1]=1;
        else
            l[n-1]=0;


        For(i,n)
        cin>>h[i];

        for(ll i=n-1; i>=1; i--)
        {
            if(h[i-1]%h[i]==0)
                l[i-1]=l[i]+1;
            else
                l[i-1]=1;
        }


        For(i,n)
        {
            m1=i;
            m2=i+l[i];
            c=0;

            while(m1<=m2)
            {
                mid=(m1+m2)/2;

                if(f[mid]-f[i]<=k)
                {
                    c=max(mid-i,c);
                    m1=mid+1;
                }
                else
                    m2=mid-1;
            }
            ans=max(ans,c);

        }
        cout<<ans<<ndl;
    }



}

