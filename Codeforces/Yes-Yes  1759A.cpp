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

    ll t,f;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        f=0;

        if(s=="YES" || s=="se" || s=="Yess" or (s.size()==1 and s[0]!='Y' and s[0]!='e' and s[0]!='s'))
        {
            cout<<"NO"<<ndl;
            continue;
        }
        else
        {

            For(i,s.size()-1)
            {

                if(s[i]=='Y' and s[i+1]=='e')
                    continue;
                if(s[i]=='e' and s[i+1]=='s')
                    continue;
                if(s[i]=='s' and s[i+1]=='Y')
                    continue;
                else
                {
                    f=1;
                    break;
                }


            }

            if(f==0)
                cout<<"YES"<<ndl;
            else
                cout<<"NO"<<ndl;


        }
    }



}

