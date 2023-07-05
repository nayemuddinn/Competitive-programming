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

    ll t,n,k,x,sum;
    cin>>t;


    while(t--)
    {
        cin>>n>>k;


        vector<pair<ll,ll>>v(n);
        sum=0;

        For(i,n)
        {
            cin>>x;
            v[i].first=x;
        }

        For(i,n)
        {
            cin>>x;
            v[i].second=x;
        }


        sortV(v);
        sum=k;

        for(auto x:v)
        {
            if(x.first<=sum)
                sum+=x.second;
        }

        cout<<sum<<ndl;


    }



}

