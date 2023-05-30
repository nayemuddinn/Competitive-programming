#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
   first_in_out

   ll t,a,b,m;
   cin>>t;

   while(t--)
   {
       cin>>a>>b;

       if(a<b)
       {
          m=a+a;
          cout<<max(m,b)*max(m,b)<<endl;
       }
       else
       {
           m=b+b;
          cout<<max(m,a)*max(m,a)<<endl;
       }


   }



}

