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

    ll n,sum=0,h=0;

    cin>>n;


    for(ll i=1; n>0 ; i++)
    {

        sum=sum+i;

        if(n-sum>=0)
            h++;

        n-=sum;
    }
    cout<<h;


}

