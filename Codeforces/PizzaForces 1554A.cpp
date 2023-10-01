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

    ll t,n,rem,time;
    cin>>t;

    while(t--)
    {
        cin>>n;

        time=0;



        rem=n/6;
        rem--;
        if(n<=6)
            time=15;
        else if(n%6==0)
            time=(n/6)*15;
        else if(n%6<3)
        {
            time=rem*15;
            time+=20;
        }
        else if(n%6<5)
        {
            time=rem*15;
            time+=25;
        }
        else
        {

            time=rem*15;
            time+=30;
        }


        cout<<time<<ndl;
    }



}
