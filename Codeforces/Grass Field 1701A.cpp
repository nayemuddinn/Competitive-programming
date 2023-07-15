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

    ll t,a,b,c,d;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;


        if(a==0 and b==0 and c==0 and d==0)
            cout<<0<<ndl;
        else if(a==1 and b==1 and c==1 and d==1)
            cout<<2<<ndl;
        else
            cout<<1<<ndl;

    }



}

