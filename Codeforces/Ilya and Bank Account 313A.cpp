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

    ll n,x,y;
    cin>>n;

    if(n>=0)
        cout<<n;
    else if(n>=-9)
        cout<<0;
    else
    {

        x=(n%10);
        n=n/10;
        y=(n%10);
        n/=10;

        if(n!=0)
        {
            cout<<n;
            x=abs(x);
            y=abs(y);
            if(x>y)
                cout<<y;
            else
                cout<<x;
        }
        else
        {
            if(x==0)
                cout<<0;
            else
                cout<<max(x,y);
        }

    }




}

