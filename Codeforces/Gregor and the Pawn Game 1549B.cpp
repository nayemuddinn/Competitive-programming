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

    ll t,n;
    cin>>t;
    string a,b;

    while(t--)
    {
        cin>>n>>b>>a;

        ll c=0;

        For(i,n)
        {
            if(a[i]=='1' and b[i]=='0' )
                c++;
            else if(a[i]=='1' and (b[i]=='1' or b[i]=='2'))
            {
                if(i>0 and b[i-1]=='1')
                    c++;
                else if(i<n-1 and b[i+1]=='1')
                {
                    b[i+1]='2';
                    c++;
                }
            }

        }

        cout<<c<<ndl;


    }



}
