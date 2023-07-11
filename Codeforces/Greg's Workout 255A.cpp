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

    ll n;
    cin>>n;

    ll ar[n+10]={0};
    ll a=0,b=0,c=0,i=0;

    For(i,n)
    cin>>ar[i];

    while(i<n)
    {
        a+=ar[i];
        i++;

        b+=ar[i];
        i++;

        c+=ar[i];
        i++;

    }

    if(a>b and a>c)
     cout<<"chest"<<ndl;
     else if(b>a and b>c)
     cout<<"biceps"<<ndl;
     else
     cout<<"back"<<ndl;







}
