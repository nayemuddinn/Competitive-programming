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
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl               "\n"
#define ll                 long long int

int main()
{
    first_in_out

    ll n,m,f=0;
    cin>>n>>m;

    char a[n][m];

    For(i,n)
    {
        For(j,m)
        {
            cin>>a[i][j];
            char x=a[i][j];
            if(x=='C' || x=='M' || x=='Y')
            {
                cout<<"#Color";
                f=1;
                break;
            }
        }
        if(f==1)
            break;

    }
     if(f==0)
        cout<<"#Black&White";





}

