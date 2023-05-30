/**
.
.
 *    author->  NATE
.
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


    ll t,x;
    ll n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        double x=n;
        double check=(x/3)*10;
        ll a=check;


        if(n%3!=0  && a%10>5)
            a=(n/3)+1;

        else
            a=n/3;



        cout<<n-a*2<<" "<<a<<ndl;

    }


}

