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

        if(n<=30)
            cout<<"NO"<<ndl;
        else
        {
            cout<<"YES"<<ndl;
            if(n-30==6  or n-30==10 or n-30==14 )
                cout<<"6 10 15 "<<n-31<<ndl;
            else
                cout<<"6 10 14 "<<n-30<<ndl;
        }
    }


}

