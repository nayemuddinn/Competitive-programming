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

        ll a[n],b[n];

        For(i,n)
        cin>>a[i];

        For(i,n)
        cin>>b[i];

        ll f=0,maxDiff=a[0]-b[0],diff;


        if(b[0]>a[0])
        {
            cout<<"NO"<<ndl;
            break;
        }
        else
            diff=a[0]-b[0];


        For2(i,n-1)
        {

            if(b[i]>a[i])
            {
                f=1;
                break;
            }

            diff=a[i]-b[i];
            maxDiff=max(maxDiff,diff);


        }




        if(f==0)
        {
            For(i,n)
            {
                 if(b[i]==0 and a[i]-maxDiff<0)
                    continue;
                 if(a[i]-maxDiff<b[i])
                 {
                     f=1;
                     break;
                 }
            }
        }

        if(f==0)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;
    }



}

