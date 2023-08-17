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
    ll t,n,m,i,j,x1,x2,y1,y2;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>i>>j;


        if(i>n/2)
        {
            x1=1;
            x2=n;
        }
        else
        {
            x1=n;
            x2=1;
        }

        if(j>m/2)
        {
            y1=1;
            y2=m;
        }
        else
        {
            y1=m;
            y2=1;
        }



        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<ndl;



    }



}

