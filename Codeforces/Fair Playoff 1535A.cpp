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

    ll t;
    cin>>t;

    ll a[4];

    while(t--)
    {
        ll max1=0,max2=0;
        ll f=0;
        ll a[4];
        ll b[4];
        ll cnt=0;
        For(i,4)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+4,greater<int>());


        max1=b[0];
        max2=b[1];

        For(i,2)
        {
            if(a[i]==max1 || a[i]==max2)
                cnt++;
        }

        if(cnt!=2)
        {
            cnt=0;
            for(ll i=2; i<4; i++)
            {
                if(a[i]==max1 || a[i]==max2)
                    cnt++;
            }

        }

        if(cnt==2)
            cout<<"NO"<<ndl;
        else
            cout<<"YES"<<ndl;

    }

}

