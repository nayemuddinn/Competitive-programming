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

    ll t,n,min;
    cin>>t;

    while(t--)
    {
        cin>>n;
        ll a[n];

        ll f=0;

        For(i,n)
        cin>>a[i];

        if(n==1  && a[0]==0)
        {
            cout<<0<<ndl;
            continue;
        }

        For(i,n)
        {

           ll mightLiar=0;
           ll liar=0;
            For(j,n)
            {
                if(a[j]>a[i])
                    mightLiar++;
            }

            For(j,n)
            {
                if(a[j]>mightLiar)
                    liar++;
            }

            if(mightLiar==liar)
            {
                cout<<liar<<ndl;
                f=1;
                break;
            }
        }

        if(f==0)
            cout<<-1<<ndl;

    }
}
