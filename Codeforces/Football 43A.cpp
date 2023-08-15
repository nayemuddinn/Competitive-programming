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


bool cmp(pair<string,ll>a, pair<string,ll>b)
{
    return a.second<b.second;
}

int main()
{
    first_in_out

    ll n;
    string s;

    map<string,ll>m;

    cin>>n;

    while(n--)
    {
        cin>>s;
        m[s]++;
    }

    auto c=max_element(m.begin(),m.end(),cmp)->first;
    cout<<c;



}

