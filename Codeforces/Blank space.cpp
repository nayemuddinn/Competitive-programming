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

    ll t,n;
    cin>>t;

    while(t--)
    {

        cin>>n;

        ll a[n];
        ll cnt=0,one=0;
        ll temp=0;

        For(i,n)
        {
            cin>>a[i];

            if(a[i]==0)
            cnt++;


            if(cnt!=0 && (a[i]==1  || i==n-1))
            {

                temp=max(temp,cnt);
                cnt=0;
            }


        }

        cout<<temp<<ndl;





    }
}
