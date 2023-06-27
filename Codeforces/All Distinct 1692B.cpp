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

    ll t,n,x;
    cin>>t;

    map<int,int>m;

    while(t--)
    {
        cin>>n;

        ll ans=0,odd=0,even=0;
        m.clear();
        For(i,n)
        {
            cin>>x;
            m[x]++;
        }


        for(auto it :m)
        {
            if(it.second%2!=0)
                ++odd;                 //one odd element will be remaining as distinct
            else
                even++;
        }

        ans=odd+(even/2)*2;            // for two even element one pair is possible others will vanish, and in a pair there will be two element
        cout<<ans<<ndl;
    }



}

