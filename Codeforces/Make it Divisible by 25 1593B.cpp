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

    string s;
    char x1,x2;

    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>s;

        ll c=-1,f=0;
        n=s.size();
        x1='a',x2='b';

        for(ll i=n-1; i>=0; i--)
        {
            if((x1=='5' and (s[i]=='2' or s[i]=='7')) or (x2=='0' and (s[i]=='0' or s[i]=='5')))
                break;
            else
                c++;
            if(s[i]=='5')
                x1=s[i];
            else if(s[i]=='0')
                x2=s[i];

        }
        cout<<c<<ndl;

    }
}




