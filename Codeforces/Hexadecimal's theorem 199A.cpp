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

    ll n,len,f1=0,f2=1,sum=0;

    cin>>n;

    if(n==0)
        cout<<"0 0 0";
    else if(n==1)
        cout<<"0 0 1";
    else if(n==2)
        cout<<"0 1 1";
    else
    {
        vector<ll>v;
        v.pb(f1);
        v.pb(f2);


        For2(i,45)
        {
            if(sum>=n)
                break;

            sum=f1+f2;
            f1=f2;
            f2=sum;
            v.pb(sum);

        }

        len=v.size();

        if(v[len-1]==n)
        {
            cout<<v[len-2]<<" "<<v[len-4]<<" "<<v[len-5];
        }
        else
            cout<<"I'm too stupid to solve this problem";
    }








}

