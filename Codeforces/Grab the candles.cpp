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

   ll t,n,a[100],mihai,biance;
   cin>>t;


   For(i,t)
   {
       cin>>n;
       mihai=0,biance=0;
       For(j,n)
       {
           cin>>a[j];

           if(a[j]%2==0)
            mihai+=a[j];
           else
            biance+=a[j];
       }

       if(mihai>biance)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }



}

