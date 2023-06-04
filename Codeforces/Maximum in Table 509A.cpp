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


int
main ()
{
  first_in_out
  ll n;


      cin >> n;

      ll a[n][n];

      For (i, n)
        a[i][0]=1;

        For(i,n)
          a[0][i]=1;



         for(ll i=1;i<n;i++)
           {
               for(ll j=1;j<n;j++)
                  a[i][j]=a[i-1][j]+a[i][j-1];
           }



           cout<<a[n-1][n-1];



    }
 
