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

    ll t,l,r,a,x,ans1,ans2;
    cin>>t;

    while(t--)
    {
        cin>>l>>r>>a;




        if(r%a!=0)
        {
            if(r-(r%a)-1>=l)
                x=r-(r%a)-1;
            else
                x=r;


        }
        else if(l==r)
            x=r;
        else
            x=r-1;


        ans1=(x/a)+(x%a);
        ans2=(r/a)+(r%a);

        cout<<max(ans1,ans2)<<ndl;




    }



}

