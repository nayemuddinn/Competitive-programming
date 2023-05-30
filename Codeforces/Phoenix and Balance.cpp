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


    ll t,n;
    cin>>t;

    vector<int>v;
    while(t--)
    {
        cin>>n;

        v.clear();

        For2(i,n)
        {
            v.pb(pow(2,i));
        }

        n=v.size();



        ll a=0,b=0;
        a+=v[n-1];

        For(i,(n/2)-1)
        a+=v[i];



        for(int i=(n/2)-1; i<n-1; i++)
            b+=v[i];



        cout<<abs(a-b)<<ndl;
    }



}

