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

    ll t,n,x;

    cin>>t;
    while(t--)
    {
        cin>>n;


        ll arr[n];
        For(i,n)
           cin>>arr[i];

           sort(arr,arr+n,greater<int>());

           ll a=0,b=0;

           For(i,n)
           {
               if(a<=b)
                  a+=arr[i];
               else
                b+=arr[i];
           }

           if(a==b)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
    }



}

