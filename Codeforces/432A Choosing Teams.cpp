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

   ll n,k,cnt=0;

   cin>>n>>k;

   ll a[n];

   For(i,n)
   {
       cin>>a[i];
       //check=a[i]+k
       if(a[i]+k<=5)
        cnt++;
   }

   cout<<cnt/3;




}

