/*
.
  author->  NATE
.
*/

#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl                "\n"
#define ll                 long long int

int main()
{
    first_in_out


    ll n;
    cin>>n;

    if(n%2==0)
    {
        cout<<n/2<<ndl;
        For(i,n/2)
        cout<<"2"<<" ";
    }
    else if(n==3)
        cout<<1<<ndl<<3<<ndl;
    else
    {
        cout<<n/2<<ndl;
        n=n-3;
        For(i,n/2)
        cout<<2<<" ";
        cout<<3<<" ";


    }

}


