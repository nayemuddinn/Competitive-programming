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


    ll t,n,m,r,c;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>r>>c;

        char a[n+1][m+1];
        bool row=0,col=0,black=0,ans=0;

        For2(i,n)
        {
            For2(j,m)
            {
                cin>>a[i][j];

                if(a[i][j]=='B')
                    black=true;

                if(i==r and j==c and a[i][j]=='B')
                    ans=true;


            }
        }


        if(ans)
        {
            cout<<0<<ndl;
            continue;
        }
        if(!black)
        {
            cout<<-1<<ndl;
            continue;
        }


        for(ll i=1; i<=m; i++)
        {
            if(a[r][i]=='B')
                row=true;
        }

        for(ll i=1; i<=n; i++)
        {
            if(a[i][c]=='B')
                col=true;
        }

        if(!col and !row)
            cout<<2<<ndl;
        else
        {
            cout<<1<<ndl;
        }


    }



}
