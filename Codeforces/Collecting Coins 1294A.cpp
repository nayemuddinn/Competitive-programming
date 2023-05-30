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
#define For3(i, j, n)      for (int i = j; i <= n; i++)
#define ndl                "\n"
#define ll                 long long int


int main()
{
    first_in_out

    ll t,n,a,b,c;
    cin>>t;


    while(t--)
    {
        cin>>a>>b>>c>>n;

        ll maxx=max(a,max(b,c));
        ll sum=a+b+c+n;

        if(sum%3==0  && sum/3>=maxx)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;

    }


}

