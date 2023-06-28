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
    ll h1,h2,h3;

    while(t--)
    {
        cin>>n;

        if(n%3!=0)
            h1=(n/3)+2;
        else
            h1=(n/3)+1;

        h2=h1-1;

        if(h1+h2==n)
            h2=h1-2;
        h3=n-h1-h2;

        cout<<h2<<" "<<h1<<" "<<h3<<ndl;

    }


}

