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

    ll f=0;

    For(i,s.size())
    {
        if((s[i]=='a' or s[i]=='o' or s[i]=='u' or s[i]=='i' or s[i]=='e'))
            continue;
        else if(s[i]=='n')
            continue;
        else if( i<s.size()-1 and (s[i+1]=='a' or s[i+1]=='o' or s[i+1]=='u' or s[i+1]=='i' or s[i+1]=='e'))
            continue;
        else
        {
            f=1;
            break;
        }

    }

    if(f==0)
        cout<<"YES";
    else
        cout<<"NO";



}

