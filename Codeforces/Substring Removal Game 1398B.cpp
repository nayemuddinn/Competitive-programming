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

    ll t;
    cin>>t;

    vector<ll>v;

    while(t--)
    {
        cin>>s;

        v.clear();
        ll c=0,alice=0;
        For(i,s.size())
        {
            if(s[i]=='1')
                c++;
            else
            {
                if(c!=0)
                    v.pb(c);
                c=0;
            }
        }
        if(c!=0)
            v.pb(c);


        sort(v.rbegin(),v.rend());

        For(i,v.size())
        {
            if(i%2==0)
                alice+=v[i];

        }

        cout<<alice<<ndl;





    }



}

