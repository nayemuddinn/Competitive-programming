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

    ll n,m,x;

    cin>>n>>m;

    string s[n];
    string a;

    bool check=true;

    For(i,n)
    cin>>s[i];

    For(i,n)
    {
        For(i,n-1)
        {
            if(s[i]==s[i+1])
            {
                check=false;
                break;
            }
        }

        if(!check)
            break;

        a=s[i];
        For(j,m-1)
        {
            if(a[j]!=a[j+1])
            {
                check=false;
                break;
            }
        }
    }


    if(check)
        cout<<"YES"<<ndl;
    else
        cout<<"NO"<<ndl;



}

