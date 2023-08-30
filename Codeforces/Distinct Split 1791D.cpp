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

    string s;
    ll t,n;
    cin>>t;

    map<ll,ll>m1,m2;

    while(t--)
    {
        cin>>n>>s;

        ll c=0;
        m2.clear(),m1.clear();
        ll a[n],b[n+1];
        b[n]=0;

        for(ll i=0,j=n-1; i<n,j>=0; i++,j--)
        {
            m1[s[i]]++;
            a[i]=m1.size();
            m2[s[j]]++;
            b[j]=m2.size();

        }


        For(i,n)
        c=max(a[i]+b[i+1],c);


        cout<<c<<ndl;


    }
}

