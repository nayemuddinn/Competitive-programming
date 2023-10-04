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

    ll t,n,m,x1,y1,x2,y2;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        ll x[n+1][m+1],a[n+1][m+1],b[n+1][m+1];
        ll ans=0,maxx=0;

        For2(i,n)
        {
            For2(j,m)
            {
                cin>>x[i][j];
                a[i][j]=x[i][j];
                b[i][j]=x[i][j];
                maxx=max(maxx,x[i][j]);
            }
        }

        if(n==1 or m==1)
        {
            cout<<maxx<<ndl;
            continue;
        }


        For2(k,m-1)
        {

            for(ll i=1,j=k; j<m and i<n; i++,j++)
                a[1][k]+=x[i+1][j+1];

        }


        for(ll k=2; k<n; k++)
        {
            for(ll i=k,j=1; i<n and j<m; i++,j++)
                a[k][1]+=x[i+1][j+1];
        }



        for(ll k=m; k>=2; k--)
        {

            for(ll i=1,j=k; j>1 and i<n; i++,j--)
                b[1][k]+=x[i+1][j-1];


        }

        for(ll k=2; k<n ; k++)
        {
            for(ll i=k,j=m; i<n and j>1; i++,j--)
                b[k][m]+=x[i+1][j-1];
        }



        For2(i,n)
        {
            For2(j,m)
            {

                if(i==1)
                {
                    if(j==1)
                        ans=max(ans,a[i][j]);
                    else if(j==m)
                        ans=max(ans,b[i][j]);
                    else
                        ans=max(ans,b[i][j]+a[i][j]-x[i][j]);
                }
                else if(j==1)
                {

                    if(i==n)
                    {

                        x2=i-1;
                        y2=m-j;
                        y2=min(x2,y2);

                        ans=max(ans,b[i-y2][j+y2]);
                    }
                    else
                    {
                        x1=i-1;
                        y1=m-j;
                        y1=min(x1,y1);

                        ans=max(ans,a[i][j]+b[i-y1][j+y1]-x[i][j]);
                    }


                }
                else if(j==m)
                {

                    if(i==n)
                    {
                        x1=i-1;
                        y1=j-1;
                        y1=min(x1,y1);
                        ans=max(ans,a[i-y1][j-y1]);

                    }
                    else
                    {
                        x1=i-1;
                        y1=j-1;
                        y1=min(x1,y1);

                        ans=max(ans,a[i-y1][j-y1]+b[i][j]-x[i][j]);
                    }
                }
                else
                {
                    x1=i-1;
                    y1=j-1;
                    y1=min(x1,y1);

                    x2=i-1;
                    y2=m-j;
                    y2=min(x2,y2);

                    ans=max(ans,a[i-y1][j-y1]+b[i-y2][j+y2]-x[i][j]);
                }


            }

        }


        cout<<ans<<ndl;





    }



}

