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

    ll n,k;

    while(t--)
    {
        cin>>n>>k;

        ll first=(n*n-n)/2;
        ll second=0;
        ll flag=0;
        For2(i,n)
        {
            if(first+second==k)
            {
                flag=1;
                break;
            }
            first--;
            second++;

        }

        if(flag==1)
        {
            cout<<"YES"<<ndl;
        }
        else
            cout<<"NO"<<ndl;



    }



}

