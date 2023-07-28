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

bool compare(pair<ll,ll>a,pair<ll,ll>b)
{

    if(a.first==b.first)
    {
        return (a.second<b.second);
    }
    return (a.first>b.first);

}

int main()
{
    first_in_out

    ll t,n,k,x,y;
    cin>>t;


    vector<pair<ll,ll>>v;

    while(t--)
    {
        cin>>n>>k;


        v.clear();

        For(i,n)
        {
            cin>>x;
            x=x%k;
            if(x==0)
                cout<<i+1<<" ";
            else
                v.pb({x,i+1});
        }
        sort(v.begin(),v.end(),compare);

        For(i,v.size())
        cout<<v[i].second<<" ";


        cout<<ndl;




    }
}

