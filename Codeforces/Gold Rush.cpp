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
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl               "\n"
#define ll                 long long int

bool gold(ll n,ll m)
{
    if(n==m)
        return true;
    if(n%3!=0)
        return false;

    return (gold(n/3,m)) or (gold(2*(n/3),m));

}

int main()
{
    first_in_out

    ll t;
    cin>>t;

    ll m,n;

    while(t--)
    {
        cin>>n>>m;



        bool check=gold(n,m);

        if(check)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;

    }



}

