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

    ll t,n,x=0;
    cin>>t;
    string s,a;

    while(t--)
    {

        cin>>n>>s;

        a.clear();

        For(i,n)
        {



            if(i+2<n and s[i+2]=='0' and s[i+3]!='0')
            {
                x=s[i+1]-'0'+((s[i]-'0')*10)+96;
                a+=char(x);
                i+=2;
            }
            else
            {

                x=s[i]-'0'+96;
                a+=char(x);


            }
        }



        cout<<a<<ndl;
    }



}

