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

        if(n%2==0)
        {
            for(ll i=2; i<=n; i+=2)
                cout<<i<<" "<<i-1<<" ";


        }
        else
        {

            cout<<"3 1 2"<<" ";

          for(ll i=5; i<=n; i+=2)
            cout<<i<<" "<<i-1<<" ";
        }

        cout<<ndl;
    }



}

