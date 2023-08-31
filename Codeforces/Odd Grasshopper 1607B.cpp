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

    ll t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>x>>n;

        if(n%4==0)
            cout<<x;
        else if(n%4==1)
        {
            if(x%2!=0)
                cout<<x+n;
            else
                cout<<x-n;

        }
        else if(n%4==2)
        {
            if(x%2!=0)
                cout<<x-1;
            else
                cout<<x+1;

        }
        else if(n%4==3)
        {
            if(x%2!=0)
                cout<<x-n-1;
            else
               cout<< x+n+1;

        }
        cout<<ndl;

    }



}

