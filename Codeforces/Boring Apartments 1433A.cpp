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


    ll t,n,cnt=0,last;


    cin>>t;

    while(t--)
    {
        cin>>n;
        last=0;
        ll sum=0;
        cnt=0;
        ll store=n;
        while(n!=0)
        {
            cnt++;
            n=n/10;

        }

        last=store%10;


       For2(i,last)
        {
            if(i==last)
            {
                For2(j,cnt)
                  sum+=j;
                  break;

            }
            sum+=10;
        }

        cout<<sum<<endl;


    }



}

