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
   string s1="codeforces";
   char k;

   while(t--)
   {
       cin>>k;
       ll flag=0;

       For(i,s1.length())
       {
           if(s1[i]==k)
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
        cout<<"Yes"<<ndl;
       else
        cout<<"NO"<<ndl;
   }




}

