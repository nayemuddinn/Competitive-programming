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

    ll t,n,sum1,sum2,x;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n],f=0;


        For(i,n)
        cin>>a[i];


        if(n==1)
        {
            cout<<"YES"<<ndl;
            continue;
        }

        a[1]+=a[0];
        a[0]=0;

        For2(i,n-1)
        {
            if(a[i]<=a[i-1])
            {
                f=1;
                break;
            }

            if(i<=n-2 and a[i]-i>0)
            {
                a[i+1]+=a[i]-i;
                a[i]=i;
            }
        }

        if(f==1)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<ndl;
    }



}

