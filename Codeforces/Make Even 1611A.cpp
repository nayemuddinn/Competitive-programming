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
#define For3(i, j, n)      for (int i = j; i <= n; i++)
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())


int main()
{
    first_in_out

    ll t,n,digit,c,x,o,num;
    cin>>t;

    while(t--)
    {
        cin>>n;

        digit=log10(n);
        c=0;



        if(n%2==0)
            cout<<0;
        else
        {
            x=pow(10,digit);
            num=n/x;
            while(digit--)       //checking if there are any even element
            {
                c++;

                if(num%2==0)
                    break;

                x=pow(10,digit);
                num=n/x;
                num=num%10;

            }

            if(c>2)            // if there are even element other than the first index, then in two swap we can make the number even
                c=2;

            if(num%2!=0)
                cout<<-1;
            else cout<<c;
        }

        cout<<ndl;


    }



}


