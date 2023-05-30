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
   //first_in_out

   string s1,s2;
   ll check[123]={0};
   getline(cin,s1);



   for(ll i=1;i<s1.length();i+=3)
   {


       if(check[s1[i]]==0 && s1[i]!='}')
       {
           s2+=s1[i];
           check[s1[i]]=1;
       }
   }

   cout<<s2.length();




}

