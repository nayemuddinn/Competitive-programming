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

    ll n,x;
    cin>>n;

    map<ll,ll>m;
    For(i,n)
    {
        cin>>x;
        m[x]++;

    }


    if(m[3]-m[1]>=0)
        m[1]=0;
    else
        m[1]=m[1]-m[3];


    if(m[1]!=0 and m[2]!=0  and m[2]%2!=0)
    {
        if(m[1]>=2)
            m[1]=m[1]-2;
        else
            m[1]=0;
    }




    ll ans=ceil((double)m[1]/4)+ceil(((double)m[2]/2))+m[3]+m[4];
    cout<<ans;






}

