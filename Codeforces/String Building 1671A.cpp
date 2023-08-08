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


    string s;

    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>s;


        n=s.size();

        bool c=0,c1=0,c2=0;
        ll a=0,b=0;

        For(i,n)
        {

            if(s[i]=='a')
            {
                c1=1;
                a++;
                if(c2 and b==1)
                {
                    c=true;
                    break;
                }
                b=0;
            }
            else
            {
                b++;
                c2=1;
                if(c1 and a==1)
                {
                    c=true;
                    break;
                }
                a=0;
            }


        }

        if(a==1 or b==1)
            c=true;

        if(!c)
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;
    }



}

