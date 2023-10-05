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

    ll n,m;
    string s1,s2;

    unordered_map<string,string>map;

    cin>>n>>m;
    while(m--)
    {
        cin>>s1>>s2;
        map.insert({s1,s2});
    }

    For(i,n)
    {
        cin>>s1;

        if(map[s1].size()<s1.size())
             cout<<map[s1]<<" ";
         else
            cout<<s1<<" ";
    }

}

