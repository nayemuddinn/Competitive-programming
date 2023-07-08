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

    ll n,a,b;

    cin>>n;

    pair<ll,ll>p[n];
    bool check=false;


    For(i,n)
    {
        cin>>a>>b;

        p[i].first=a;
        p[i].second=b;

    }

    sort(p,p+n);


        For(i,n)
        {
            if(p[i].first<p[i+1].first  and p[i].second>p[i+1].second)
            {
                check=true;
                break;
            }

        }


    if(check)
        cout<<"Happy Alex"<<ndl;
    else
        cout<<"Poor Alex"<<ndl;



}
