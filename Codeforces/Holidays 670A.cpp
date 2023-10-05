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

    ll ans,n;

    cin>>n;
    ans=(n/7)*2;

    if(n%7==0)
        cout<<ans<<" "<<ans;
    else
    {
        if(n%7==6)
            cout<<ans+1<<" "<<ans+2;
        else if(n%7==1)
            cout<<ans<<" "<<ans+1;
        else
            cout<<ans<<" "<<ans+2;

    }





}

