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

    string s;

    ll t,ab,ba,indexA,indexB,n;
    cin>>t;

    while(t--)
    {
        cin>>s;
        ab=0,ba=0;
        n=s.size();

        For(i,n-1)
        {
            if(s[i]=='a' and s[i+1]=='b')
            {
                ab++;
                indexA=i;
            }
            else  if(s[i]=='b' and s[i+1]=='a')
            {
                ba++;
                indexB=i;
            }
        }


        if(ab==ba)
            cout<<s<<ndl;
        else
        {

            if(ab>ba)
            {
                if(indexA==0)
                    s[n-1]='a';
                else
                    s[0]='b';
            }
            else
            {
                if(indexB==0)
                    s[n-1]='b';
                else
                    s[0]='a';
            }
            cout<<s<<ndl;
        }


    }


}
