
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

    ll t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll neg=0,sum=0,maxn=0;


        For(i,n)
        {
            cin>>x;
            sum+=x;

            if(x==1)
            {
                maxn=max(maxn,neg);
                neg=0;
            }
            else
                neg++;
        }


        maxn=max(maxn,neg);

        if(maxn>=2)
            sum+=4;
        else if(maxn==0)
            sum-=4;

            cout<<sum<<ndl;


    }



}
