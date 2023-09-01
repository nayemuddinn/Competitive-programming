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

    ll t,n,a,q,rem,pos,neg,sub;
    cin>>t;

    string s;
    while(t--)
    {
        cin>>n>>a>>q>>s;
        pos=0,neg=0;
        sub=a;

        if(a>=n)
        {
            cout<<"YES"<<ndl;
            continue;
        }


        rem=n-a;


        For(i,s.size())
        {
            if(s[i]=='+')
            {
                sub++;
                pos++;
            }
            else
            {
                neg++;
                sub--;
            }

            if(sub>=n)
                break;
        }

        if(pos<rem)
            cout<<"NO";
        else
        {
            if(sub>=n)
                cout<<"YES";
            else
                cout<<"MAYBE";
        }
        cout<<ndl;


    }



}

