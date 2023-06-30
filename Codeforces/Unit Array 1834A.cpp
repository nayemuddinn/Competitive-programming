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

    ll t,n,x,pos,neg;
    cin>>t;

    while(t--)
    {
        cin>>n;

        pos=0,neg=0;

        For(i,n)
        {
            cin>>x;

            if(x==1)
                pos++;
            else
                neg++;
        }

        if(neg<=pos  && neg%2==0)
            cout<<0<<ndl;
        else
        {
            ll i=0;
            while(neg>pos)
            {
                pos++;
                neg--;
                i++;
            }

            if(neg%2!=0)
                i++;

            cout<<i<<ndl;
        }
    }



}
