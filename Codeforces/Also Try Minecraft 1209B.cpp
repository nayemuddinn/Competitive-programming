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

    ll t,n,q,s;
    cin>>n>>q;

    ll a[n+1],b[n+1],c[n+1];
    b[0]=0;
    c[n-1]=0;


    For2(i,n)
    cin>>a[i];


    for(ll i=1,j=n; i<n,j>=2; i++,j--)
    {
        if(a[i]<a[i+1])
            b[i]=b[i-1];
        else
            b[i]=b[i-1]+(a[i]-a[i+1]);

        if(a[j]<a[j-1])
            c[j-2]=c[j-1];
        else
            c[j-2]=c[j-1]+(a[j]-a[j-1]);

    }


    while(q--)
    {
        cin>>s>>t;

        if(s<t)
            cout<<abs(b[s-1]-b[t-1])<<ndl;
        else
            cout<<abs(c[s-1]-c[t-1])<<ndl;


    }



}

