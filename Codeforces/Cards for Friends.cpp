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

    ll t,w,h,n;
    cin>>t;

    while(t--)
    {
        cin>>w>>h>>n;

        ll cnt=1;

        while(w%2==0)
        {
            w=w/2;
            cnt*=2;
        }

        while(h%2==0)
        {
            h=h/2;
            cnt*=2;
        }





        if(cnt>=n)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;





    }

}

