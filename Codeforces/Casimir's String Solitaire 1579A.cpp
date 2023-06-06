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

    string s;
    stack<char>st;

    while(t--)
    {

        cin>>s;

        ll a=0,b=0,c=0;

        For(i,s.length())
        {
            if(s[i]=='A')
                a++;
            if(s[i]=='B')
                b++;
            if(s[i]=='C')
                c++;
        }

        if(b==c  && a==0  ||  b==a+c)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;



    }



}

