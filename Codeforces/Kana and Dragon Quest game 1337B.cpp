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

    ll t,x,n,m;
    cin>>t;

    while(t--)
    {
        cin>>x>>n>>m;

        ll total=m*10;

        bool check=0;



        if(x<=total)
            check=1;

        while(n--)
        {
            x=floor((double)x/2)+10;
            if(x<=0 or x<=total)
                check=1;
            if(x<=20)
                break;


        }


        if(check)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;

    }



}
