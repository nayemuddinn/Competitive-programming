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

    ll t,n,cnt=0;
    cin>>t;




    For(j,t)
    {
        cin>>n;

        ll a[n];



        For(i,n)
        cin>>a[i];

        For(i,n)
        {
            if(a[i]==a[i+1])
                continue;
            if(a[i]!=a[i+1]  &&  a[i]==a[i+2])
            {
                cout<<i+2<<endl;
                break;
            }
            if(a[i]!=a[i+1]  &&  a[i+1]==a[i+2])
            {
                cout<<i+1<<endl;
                break;
            }

            if(i==n-1  && a[i]!=a[i-1])
            {
                cout<<i+1<<endl;
                break;
            }


        }

    }



}
