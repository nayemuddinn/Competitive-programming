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

    string a[5];

    cin>>s;
    char one=s[0],two=s[1];

    ll f=0;

    For(i,5)
    {
        cin>>a[i];

        if(a[i][0]== one || a[i][0]== two || a[i][1]== one || a[i][1]== two)
        {
            f=1;
            break;
        }
    }

    if(f==0)
        cout<<"NO";
    else
        cout<<"YES";





}

