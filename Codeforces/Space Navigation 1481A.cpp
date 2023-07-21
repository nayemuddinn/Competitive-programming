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

    string s;

    ll t,x,y;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>s;

        bool X=0,Y=0;
        ll u=0,d=0,r=0,l=0;

        For(i,s.size())
        {
            if(s[i]=='U')
                u++;
             if(s[i]=='D')
                d--;
           if(s[i]=='L')
                l--;
           if(s[i]=='R')
                r++;
        }

        if(x>=0 and r>=x)
            X=1;
        else if(x<0 and l<=x)
            X=1;

        if(y>=0 and u>=y)
            Y=1;
        else if(y<0 and d<=y)
            Y=1;

        if(X and Y)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;

    }



}

