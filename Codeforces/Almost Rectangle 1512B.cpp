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

        char a[n][n];
        ll r1,r2,c1,c2;
        bool first=false,second=false;

        For(i,n)
        {
            For(j,n)
            {
                cin>>a[i][j];

                if(!first and a[i][j]=='*')
                {
                    r1=i;
                    c1=j;
                    first=true;
                    continue;
                }

                if(!second and a[i][j]=='*')
                {
                    r2=i;
                    c2=j;
                    second=true;
                }


            }
        }


        if(r1==r2 and r2!=n-1)
        {
            r2=r1+1;
            r1=r2;
        }
        else if(r1==r2 and r2==n-1)
        {
            r1=r2-1;
            r2=r1;
        }
        if(c1==c2 and c2!=n-1)
        {
            c2=c1+1;
            c1=c2;
        }
        else if(c1==c2 and c2==n-1)
        {

            c1=c2-1;
            c2=c1;
        }

        For(i,n)
        {
            For(j,n)
            {
                if(i==r1 and j==c2 or i==r2 and j==c1)
                    cout<<"*";
                else
                    cout<<a[i][j];
            }
            cout<<ndl;
        }
    }




}

