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

    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n+1],c=0;


        For2(i,n)
        cin>>a[i];

        For2(i,n)
        {
            if(a[i]!=i)
                c++;

        }

        if(c==0)
            cout<<0;
        else
        {
            if(a[1]==1 or a[n]==n)
                cout<<1;
            else if(a[1]==n and a[n]==1)
                cout<<3;
            else
                cout<<2;
        }

        cout<<ndl;


    }



}

