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

    ll n,cup=0,medal=0,x;


    For(i,3)
    {
        cin>>x;
        cup+=x;
    }

    For(i,3)
    {
        cin>>x;
        medal+=x;
    }

    cin>>n;


    cup=ceil((double)cup/5);
    medal=ceil((double)medal/10);


    if(cup+medal<=n)
        cout<<"YES";
    else
        cout<<"NO";





}
