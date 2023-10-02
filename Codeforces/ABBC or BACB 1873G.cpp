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
#define For4(i,n)          for(int i=n-1; i>=0; i--)
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())


int main()
{
    first_in_out

    string s,s1;

    ll t,lenA,n,f=0;
    vector<ll>v;
    cin>>t;

    while(t--)
    {
        cin>>s;
        n=s.size();


        lenA=0,f=0;
        v.clear();

        For(i,n)
        {
            if(s[i]=='A')
                lenA++;

            if(s[i]=='B' and s[i+1]=='B' and i<n-1)
                f=1;
        }

        if((s[0]=='B' or s[n-1]=='B') or f==1)
            cout<<lenA;
        else
        {
            lenA=0;

            For(i,n)
            {
                if(s[i]=='A')
                    lenA++;
                else
                {
                    v.pb(lenA);
                    lenA=0;
                }
            }

            if(lenA>0)
                v.pb(lenA);

            sortV(v);

            cout<< accumulate(++v.begin(),v.end(),0);


        }
        cout<<ndl;


    }



}

