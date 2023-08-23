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


bool isPrime(int n)
{
    for(ll i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;


}

int main()
{
    first_in_out

    vector<ll>v;

    ll n,c=0,j=0,cnt=0;
    cin>>n;


    if(n<6)
        cout<<0;
    else
    {
        for(ll i=2; i<=n/2; i++)
        {
            if(isPrime(i))
                v.pb(i);

        }




        for(ll i=6; i<=n; i++)
        {
            while(1)
            {

                if(v[j]>i/2  or c>2 or j>v.size()-1)
                    break;

                if(i%v[j]==0)
                    c++;

                j++;

            }

            if(c==2)
                cnt++;
            c=0;
            j=0;


        }

        cout<<cnt;
    }
}
