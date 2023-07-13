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

    ll t,x,k,n;
    cin>>t;

    while(t--)
    {
        cin>>n>>k>>x;

        ll sum=0,c=0;

        if(k==1 and n!=0 or n%2!=0 and k==2 and x==1)
            cout<<"NO"<<ndl;
        else
        {
            cout<<"YES"<<ndl;

            if(x!=1)
            {
                cout<<n<<ndl;

                For(i,n)
                cout<<1<<" ";
                cout<<ndl;
            }
            else
            {
                while(1)
                {
                    sum+=2;
                    if(sum>=n)
                    {
                        if(sum==n)
                            c++;
                        break;
                    }
                    c++;

                }

                if(sum>n)
                {
                    cout<<c<<ndl;
                    For(i,c-1)
                    cout<<2<<" ";
                    cout<<3<<" ";
                }
                else
                {
                    cout<<c<<ndl;
                    For(i,c)
                    cout<<2<<" ";

                }
                cout<<ndl;

            }

        }
    }



}

