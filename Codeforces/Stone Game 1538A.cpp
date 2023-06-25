
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

    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n];

        ll maxx=0,minn=1000;
        ll low,high,ans=0;


        For(i,n)
        {
            cin>>a[i];
            maxx=max(maxx,a[i]);
            minn=min(minn,a[i]);
        }


        low=find(a,a+n,minn)-a+1;           //finding index;
        high=find(a,a+n,maxx)-a+1;

        if(low>high)
            swap(low,high);

        ll aa=low+n-high+1;
        ll b=max(low,high);
        ll c=max(n-low+1,n-high+1);



        cout<<min(aa,min(b,c))<<ndl;      //minimim value from the 3 possible ways;


    }





}

