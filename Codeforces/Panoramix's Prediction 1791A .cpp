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

    ll a,b;
    cin>>a>>b;



    for(ll i=a+1; i<=50; i++)
    {
        bool prime=true;
        for(ll j=2; j<i; j++)
        {
            if(i%j==0)
            {
                prime=false;
                break;
            }
        }

        if(i==50 && prime==false)
            cout<<"NO";

        if(prime==false)
            continue;



        if(i==b)
        {
            cout<<"YES";
            break;
        }
        else
        {
            cout<<"NO";
            break;
        }

    }


}

