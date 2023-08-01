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

    cin>>s;

    bool c1=false;
    ll c=0;

    if(s[0]<97)
        c1=true;

    For2(i,s.size()-1)
    {
        if(s[i]<97)
            c++;

    }

    if(c1 and c==s.size()-1)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    else if(!c1 and c==s.size()-1)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s[0]=toupper(s[0]);

        cout<<s;

    }
    else
        cout<<s;



}

