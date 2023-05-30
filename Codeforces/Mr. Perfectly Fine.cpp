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

    ll a,n;
    string b;


    while(t--)
    {
        cin>>n;
        ll max11=20000000000;
        ll max01=20000000000;
        ll max10=20000000000;

        For(i,n)
        {

            cin>>a>>b;

            if(b=="11")
            {
                if(a<max11)
                    max11=a;

            }

            if(b=="01")
            {
                if(a<max01)
                    max01=a;
            }

            if(b=="10")
            {
                if(a<max10)
                    max10=a;

            }


        }

        ll n=min(max11,max10+max01);

        if(n>=20000000000)
            cout<<-1<<ndl;
        else
            cout<<n<<ndl;





    }



}
