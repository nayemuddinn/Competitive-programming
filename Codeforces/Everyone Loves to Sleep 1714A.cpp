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

    ll t,n,H,M,h,m,c,ans,HH,MM;
    cin>>t;


    while(t--)
    {
        cin>>n>>HH>>MM;
        ans=10e6;
        while(n--)
        {
            cin>>h>>m;
            c=0;
            H=HH;
            M=MM;

            while(1)
            {

                if(h==H and m==M)
                    break;

                c++;
                M++;
                if(M==60)
                {
                    H++;
                    M=0;
                }
                if(H>23)
                    H=0;


            }

            ans=min(ans,c);
            c=0;
        }

        cout<<ans/60<<" "<<ans%60<<ndl;
    }



}

