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

    ll len,z,e,r,o,n;
    string s;
    cin>>len>>s;

    z=0,e=0,r=0,o=0,n=0;

    For(i,len)
    {
        if(s[i]=='z')
            z++;
        else if(s[i]=='e')
            e++;
        else if(s[i]=='r')
            r++;
        else if(s[i]=='o')
            o++;
        else if(s[i]=='n')
            n++;
    }



    if(e>=n and o>=n)
    {
        e=e-n;
        o=o-n;

        For(i,n)
        cout<<1<<" ";
    }

    if(z==e and z==o and z==r)
    {
        For(i,z)
        cout<<0<<" ";
    }






}

