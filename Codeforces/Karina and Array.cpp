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

   ll t,n,max;

   cin>>t;

   For(h,t)
   {

       cin>>n;

       ll a[n];
       max=-9999999999999999999999999999;

       For(i,n)
       cin>>a[i];

       sort(a,a+n);

       For(i,n-1)
       {
           if(a[i]*a[i+1]>max)
            max=a[i]*a[i+1];
       }
       cout<<max<<endl;

   }



}

