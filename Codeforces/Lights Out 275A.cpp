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


    ll a[3][3],n=3;
    ll s[3][3];

    For(i,n)
    {
        For(j,n)
        {
            cin>>a[i][j];
            s[i][j]=1;
        }
    }



    For(i,n)
    {
        For(j,n)
        {
            if(a[i][j]%2!=0)
            {
                if(s[i][j]==0)
                    s[i][j]=1;
                else
                    s[i][j]=0;

                if(i<n-1)
                {
                    if(s[i+1][j]==0)
                        s[i+1][j]=1;
                    else
                        s[i+1][j]=0;

                }

                if(i>0)
                {
                    if(s[i-1][j]==0)
                        s[i-1][j]=1;
                    else
                        s[i-1][j]=0;
                }



                if(j>0)
                {
                    if(s[i][j-1]==0)
                        s[i][j-1]=1;
                    else
                        s[i][j-1]=0;
                }

                if(j<n-1)
                {
                    if(s[i][j+1]==0)
                        s[i][j+1]=1;
                    else
                        s[i][j+1]=0;
                }

            }
        }

    }

    For(i,n)
    {
        For(j,n)
        cout<<s[i][j];
        cout<<ndl;
    }


}

