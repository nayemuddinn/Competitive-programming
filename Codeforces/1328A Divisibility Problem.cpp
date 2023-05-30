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

   ll t,count;
   cin>>t;


   ll a[t][2]={0};

   For(i,t)
   {

      cin>>a[i][0];
      cin>>a[i][1];
      if((a[i][0]%a[i][1]!=0))
      cout<<a[i][1]-(a[i][0]%a[i][1])<<endl;
      else
        cout<<0<<endl;
   }




}

