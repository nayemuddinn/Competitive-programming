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

    ll t,n,k,x;
    cin>>t;



    while(t--)
    {
        cin>>n>>k;


        ll a[n],first=0,last=0;

        For(i,n)
        cin>>a[i];

        For(i,n)
        {
            if(a[i]==a[0])
                first++;

            if(first>=k and a[i]==a[n-1])
                last++;

        }



        if((first>=k and last>=k)  or  (a[0]==a[n-1] and first>=k))
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;
    }



}
