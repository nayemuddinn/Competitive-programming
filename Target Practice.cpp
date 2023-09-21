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

    ll t,n=10;
    cin>>t;

    char x;

    while(t--)
    {
        ll c=0;

        For2(i,n)
        {
            For2(j,n)
            {
                cin>>x;

                if(x=='X')
                {
                    if(i==1 or i==n or j==1 or j==n)
                        c+=1;
                    else if((i==2 or i==9) and (j>=2 and j<=9))
                        c+=2;
                    else if(i==3 or i==8)
                    {
                        if(j==2 or j==9)
                            c+=2;
                        else
                            c+=3;

                    }
                    else if(i==4 or i==7)
                    {
                        if(j==2 or j==9)
                            c+=2;
                        else if(j==3 or j==8)
                            c+=3;
                        else
                            c+=4;
                    }
                    else if(i==5 or i==6)
                    {
                        if(j==2 or j==9)
                            c+=2;
                        else if(j==3 or j==8)
                            c+=3;
                        else if(j==4 or j==7)
                            c+=4;
                        else
                            c+=5;
                    }
                }

            }
        }

        cout<<c<<ndl;


    }



}

