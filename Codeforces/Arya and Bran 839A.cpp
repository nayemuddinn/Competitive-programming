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

    ll n,k,sum=0,stock=0,f=-1;

    cin>>n>>k;

    ll a[n];

    For(i,n)
    cin>>a[i];

    For(i,n)
    {
        if(a[i]+stock<=8)
        {
            sum+=a[i]+stock;
            stock=0;
        }
        else
        {
            sum+=8;
            stock=(stock+a[i])-8;
        }


        if(sum>=k)
        {
            f=i+1;
            break;
        }
    }


    cout<<f;



}
