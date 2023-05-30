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

int main()
{
   first_in_out

   ll t,n,m;
   cin>>t;


   while(t--)
   {
       cin>>n>>m;

       if(n%m!=0)
        cout<<"YES"<<ndl;
       else
        cout<<"NO"<<ndl;
   }



}

