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
    cin>>s;

    ll c=0;
    ll zero=0;
    ll one=0;
    ll ans1=0,ans2=0;

    ll n=s.length();

    For(i,n)
    {
        if(s[i]=='1')
        {
            one++;
            ans2=max(ans2,zero);
            zero=0;
        }
        else
        {

            zero++;
            ans1=max(ans1,one);
            one=0;
        }
    }

     ans2=max(ans2,zero);
     ans1=max(ans1,one);


    ll ans=max(ans1,ans2);

    if(ans>=7)
        cout<<"YES";
    else
        cout<<"NO";



}

