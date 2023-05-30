#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(0);
#define For(i,n)           for(int i=0;i<n;i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
   first_in_out;

   string s1;
   string s2;
   cin>>s1>>s2;

   cout<<endl<<endl;

   For(i,s1.length())
   {
       if(s1[i]!=s2[i])
        cout<<"1";
       else
        cout<<"0";
   }


}

