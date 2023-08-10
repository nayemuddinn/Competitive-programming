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
    ll t,one,zero,n;
    cin>>t;

    while(t--)
    {
        cin>>s;

        one=0,zero=0;


        For(i,s.size())
        {
           if(s[i]=='1')
            one++;
           else
            zero++;
        }


        n=min(one,zero);

        if(n%2==0)
            cout<<"NET";
        else
            cout<<"DA";
        cout<<ndl;

    }



}

