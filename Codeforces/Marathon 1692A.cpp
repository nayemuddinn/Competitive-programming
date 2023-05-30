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

   ll t,a,b,c,d,cnt=0;

   cin>>t;

   For(i,t)
   {
       cnt=0;
       cin>>a>>b>>c>>d;

       if(a<b)
        cnt++;
       if(a<c)
        cnt++;
       if(a<d)
        cnt++;
        cout<<cnt<<endl;

   }




}

