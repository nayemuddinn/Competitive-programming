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

    ll t,n,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        if(a==b+c or b==a+c or c==a+b  or a==b and c%2==0  or b==c and a%2==0  or a==c and b%2==0 )
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;
    }



}

