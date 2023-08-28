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
    char c;

    ll t,n;
    cin>>t;

    vector<ll>v1;
    vector<ll>v2;

    while(t--)
    {
        cin>>n>>c>>s;


        v1.clear();
        v2.clear();
        ll res=0,ans=0;

        if(c=='g')
        {
            cout<<0<<ndl;
            continue;
        }


        For(i,n)
        {
            if(s[i]==c)
                v1.pb(i+1);
            else if(s[i]=='g')
                v2.pb(i+1);
        }

        v2.pb(10e9);

        For(i,v1.size())
        {
            ans=*lower_bound(v2.begin(),v2.end(),v1[i]);

            if(ans==10e9)
                res=max(res,n-v1[i]+v2[0]);
            else
                res=max(res,ans-v1[i]);
        }

        cout<<res<<ndl;

    }



}



