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

    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n],b[n];
        ll sum=0;
        if(n==1)
            cout<<1<<endl;
        else if(n%2!=0)
            cout<<-1<<endl;
        else
        {
            ll j=1;
            for(int i=n; i>=1; i--)
            {
                if(i%2==0)
                    cout<<i<<" ";
                else{
                    cout<<j<<" ";
                    j+=2;
                }
            }

            cout<<endl;

        }
    }




}


