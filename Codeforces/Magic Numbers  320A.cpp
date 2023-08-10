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

    bool check=0;

    For(i,s.size())
    {
        if(s[i]=='1')
            continue;

        if(s[i]=='4' and i>0 and s[i-1]=='1')
            continue;

        if(s[i]=='4' and s[i-1]=='4' and i>1 and s[i-2]=='1')
            continue;
        else
        {
            check=true;
            break;
        }


    }

    if(check)
        cout<<"NO";
    else
        cout<<"YES";



}

