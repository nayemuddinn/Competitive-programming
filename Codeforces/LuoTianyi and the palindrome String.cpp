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

   ll t;
   cin>>t;
   string s1,s2;

   while(t--)
   {
          cin>>s1;
          ll cnt=0;
          ll n=s1.length()-1;
          ll f=0;

          while(n!=0)
          {
             s1=s1.substr(0,n);
             s2=s1;

             reverse(s1.begin(),s1.end());

             if(s1==s2)
                n--;
             else
             {
                 f=1;
                 break;
             }
          }




         if(f==0)
            cout<<-1<<ndl;
         else
            cout<<n<<ndl;

   }



}

