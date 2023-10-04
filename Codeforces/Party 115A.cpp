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

vector<vector<ll>>v;

ll BFS(ll source,ll level[])
{

    level[source]=1;
    ll maxx=1,x,u;

    queue<ll>q;
    q.push(source);


    while(!q.empty())
    {
        u=q.front();
        q.pop();

        for(ll j=0; j<v[u].size(); j++)
        {
            x=v[u][j];
            if(level[x]==-1)
            {
                level[x]=level[u]+1;
                maxx=max(level[x],maxx);
                q.push(x);
            }
        }
    }


    return maxx;


}

int main()
{
    first_in_out

    ll n,x,u,maxx=1;
    cin>>n;

    v.resize(n+1);
    vector<ll>v2;
    ll level[n+1];

    memset(level,-1,sizeof(level));

    level[0]=0;

    For2(i,n)
    {
        cin>>x;

        if(x==-1)
        {
            level[i]=1;
            v2.pb(i);
        }
        else
        {
            v[i].pb(x);
            v[x].pb(i);
        }
    }


    For(i,v2.size())
    maxx=max(maxx,BFS(v2[i],level));


    cout<<maxx<<ndl;

}






