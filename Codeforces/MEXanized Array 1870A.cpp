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
#define For4(i,n)          for(int i=n-1; i>=0; i--)
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())


int main()
{
    first_in_out

    ll t,n,k,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>k>>x;

        bool mex=0;
        ll sum=0;



        For(i,n)
        {

            if(i>=k)
            {
                mex=1;

                if(x==k)
                    --x;
                sum+=x;
            }
            else
                sum+=i;

            if(i>x and !mex)
            {
                sum=-1;
                break;
            }



        }

        if(k>n or (k>x+1 and !mex))
            sum=-1;

        cout<<sum<<ndl;


    }



}

