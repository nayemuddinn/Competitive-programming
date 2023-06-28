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

    ll t;
    ll  n=7;
    ll s[n];


    ll b[n];
    cin>>t;

    while(t--)
    {

        For(i,n)
        cin>>s[i];
        ll f=0;

        For(i,n)
        {
            for(ll j=i+1; j<n; j++)
            {
                for(ll k=j+1; k<n; k++)
                {
                    f=0;
                    ll x=s[i]+s[j]+s[k];
                    ll y=s[i]+s[j];
                    ll z=s[i]+s[k];
                    ll m=s[j]+s[k];

                    b[0]=s[i];
                    b[1]=s[j];
                    b[2]=s[k];
                    b[3]=x;
                    b[4]=y;
                    b[5]=z;
                    b[6]=m;

                    sort(b,b+n);

                    For(i,n)
                    {
                        if(s[i]!=b[i])
                            f=1;
                    }



                    if(f==0)
                    {
                        cout<<s[i]<<" "<<s[j]<<" "<<s[k]<<ndl;
                        break;
                    }
                }


            }

        }
    }





}

