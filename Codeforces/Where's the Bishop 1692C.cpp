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

    char a[8][8];

    while(t--)
    {

        ll f=0;

        For(i,8)
        {
            For(j,8)
            cin>>a[i][j];
        }

        For(i,8)
        {
            For(j,8)
            {
                if(a[i][j]=='#' and a[i-1][j-1]=='#' and a[i-1][j+1]=='#' and a[i+1][j-1]=='#' and a[i+1][j-1]=='#' )
                {
                    cout<<i+1<<" "<<j+1<<ndl;
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
    }



}

