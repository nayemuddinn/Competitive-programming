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

    ll t;
    cin>>t;

    ll a[3];

    ll first,second,ans;

    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];

        if(a[0]==1)
            cout<<1<<ndl;
        else
        {
            first= abs(a[0]-1);

            if(a[1]<a[2])
                second=abs(a[1]-a[2])+a[2]-1;
            else
                second=abs(a[1]-a[2])+a[2]-1;

            ans=min(first,second);

            if(first==second)
                cout<<3<<ndl;
            else
            {
                if(ans==first)
                    cout<<1<<ndl;
                else
                    cout<<2<<ndl;

            }
        }

    }

}

