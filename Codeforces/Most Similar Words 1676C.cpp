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

    ll t,n,m,ans,minn;
    cin>>t;


    while(t--)
    {
        cin>>n>>m;

        string s[n],s1,s2;
        ans=10000000000;

        For(i,n)
        cin>>s[i];

        For(i,n-1)
        {
            for(ll j=i+1; j<n; j++)
            {
                minn=0;
                s1=s[i];
                s2=s[j];
                For(k,m)
                {
                    minn+=abs(s1[k]-s2[k]);
                }
                ans=min(minn,ans);
            }
        }

        cout<<ans<<ndl;
    }



}

