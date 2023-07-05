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

    ll k2,k3,k5,k6,ans;
    cin>>k2>>k3>>k5>>k6;

    ll k=min({k2,k5,k6});

    ans=k*2*100+k*5*10+k*6;
    k2=k2-k;

    k=min(k2,k3);

    ans+=k*3*10+k*2;

    cout<<ans;




}

