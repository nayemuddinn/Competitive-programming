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

    ll t,l,r,k,c;
    cin>>t;

    while(t--)
    {
        cin>>l>>r>>k;

        c=r-l+1;


        if(l==1 && r==1)
        {
            cout<<"NO"<<ndl;
            continue;

        }

        if(l%2==0  && r%2==0)
            c--;

        if(k>=(c+1)/2 || l==r )
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;



    }



}


 //have to make positive even pairs for making gcd more than 1

 //(c+1)/2 -> number of operations need

