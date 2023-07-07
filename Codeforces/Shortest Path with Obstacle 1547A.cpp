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

    ll t,xa,xb,ya,yb,xf,yf,c;

    cin>>t;

    while(t--)
    {
        cin>>xa>>ya>>xb>>yb>>xf>>yf;

        c=abs(xa-xb)+abs(ya-yb);

        if(xa==xb and xa==xf  and yf>=min(ya,yb) and yf<=max(ya,yb))
            c+=2;
        else if(ya==yb and ya==yf  and xf>=min(xa,xb) and xf<=max(xa,xb))
            c+=2;



        cout<<c<<ndl;



    }



}

