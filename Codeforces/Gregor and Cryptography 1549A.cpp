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



bool Prime(ll n)
{

bool prime=true;


  for(ll i=2 ; i<=n/2; i++)
  {
      if(n%i==0)
      {
          prime=false;
          break;
      }
  }

return prime;
}

int main()
{
   first_in_out

   ll t,n,b;
   cin>>t;

   while(t--)
   {
      cin>>n;
      b=0;

      while(n--)
      {
            if(!Prime(n))
            {
                for(ll i=2 ; i<=n/2; i++)
                 {
                       if(n%i==0)
                       {
                           b=i;
                           break;
                       }
                 }

                 if(b!=0)
                 {
                     cout<<b<<" "<<n<<ndl;
                     break;
                 }
            }
      }


   }



}

