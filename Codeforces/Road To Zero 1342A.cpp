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

    ll t,a,b,x,y,ans1,ans2,minn,maxx,ans3,ans;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>a>>b;

        minn=min(x,y);
        maxx=max(x,y);
        maxx=maxx-minn;

        if(x==y)
        {
            ans=min((x+x)*a,x*b);
        }
        else
        {
             ans1=(minn*b)+(maxx*a);
             ans3=(x+y)*a;
             ans=min({ans1,ans3});
        }

        cout<<ans<<ndl;

  }


}

