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

    ll t,n,x,ans;
    cin>>t;

    set<ll>s;

    while(t--)
    {
        cin>>n;

        ll a[n];
        s.clear();
        ans=0;

        For(i,n)
        cin>>a[i];


        for(ll i=n-1; i>=0; i--)
        {
            s.insert(a[i]);
            ans++;

            if(ans>s.size())
                break;
        }

        //cout<<s.size()<<ndl;


        cout<<n-s.size()<<ndl;




    }



}

