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

    ll t;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        bool m=0,n=0;

        For(i,s.size())
        {

            if(i<s.size()-1 and ((s[i]=='(' and s[i+1]==')') or (s[i]==')' and s[i+1]=='(')))
                m=1;
            if(i<s.size()-1 and ((s[i]=='(' and s[i+1]=='(') or (s[i]==')' and s[i+1]==')')))
                n=1;
            }

        if(s=="()")
            cout<<"NO";
        else
        {
            cout<<"YES"<<ndl;


           if(m and !n)
            {
                For2(i,s.size()*2)
                {
                    if(i<=s.size())
                        cout<<"(";
                    else
                        cout<<")";
                }
            }
            else if((n and m) or (!m and n))
            {
                For2(i,2*s.size())
                {
                    if(i%2!=0)
                        cout<<"(";
                    else
                        cout<<")";
                }
            }

        }
        cout<<ndl;
    }


}

