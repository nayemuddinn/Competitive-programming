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

    while(t--)
    {
        cin>>n;

        char a[2][n];

        For(i,2)
        {
            For(j,n)
            {
                cin>>a[i][j];
                if(a[i][j]=='G' or a[i][j]=='B')
                    a[i][j]='X';
            }
        }

        ll f=0;


        For(i,2)
        {
            For(j,n)
            {
                if(a[0][j]==a[1][j])
                    continue;
                else
                {
                    f=1;
                    break;
                }
            }
        }

        if(f==0)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;



    }


}

