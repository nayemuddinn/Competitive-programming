
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

    ll t,n,f;
    cin>>t;

    string s;
    map<ll,char>m;

    while(t--)
    {
        cin>>n;


        ll a[n];
        f=0;
        m.clear();

        For(i,n)
        cin>>a[i];
        cin>>s;

        For(i,n)
        {
            if(m[a[i]]=='\0')
                m[a[i]]=s[i];
            else if(m[a[i]]!=s[i])
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
