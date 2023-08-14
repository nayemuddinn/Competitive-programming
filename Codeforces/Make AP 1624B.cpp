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

    ll t,n,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        if(b-a==c-b)
            cout<<"YES";
        else
        {
            if(2*b-c>0 and (2*b-c)%a==0)
                cout<<"YES";
            else if((a+c)%(2*b)==0)
                cout<<"YES";
            else if(2*b-a>0 and (2*b-a)%c==0)
                cout<<"YES";
            else
                cout<<"NO";

        }
        cout<<ndl;
    }



}

