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
    string s;
    char x,y,a;

    deque<char>d;
    while(t--)
    {
        cin>>s;

        n=s.size();
        d.clear();
        ll f=0;

        For(i,n)
        d.pb(s[i]);

        a=96+n;
        For(i,n)
        {
            x=d.front();
            y=d.back();

            if(a==x)
                d.pop_front();
            else if(a==y)
                d.pop_back();
            else
            {
                f=1;
                break;
            }
            a--;
        }


        if(f==1)
            cout<<"NO"<<ndl;
        else
            cout<<"YES"<<ndl;
    }



}

