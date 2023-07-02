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
    ll t,sizea,sizeb,n;
    cin>>t;

    string s1,s2;

    while(t--)
    {
        cin>>s1>>s2;

        sizea=0,sizeb=0;

        n=s1.length();

        if(s1[n-1]=='L')
            sizea=3+n-1;
        else if(s1[n-1]=='M')
            sizea=2;
        else if(s1[n-1]=='S')
            sizea=1-n-1;


        n=s2.length();
        if(s2[n-1]=='L')
            sizeb=3+n-1;
        else if(s2[n-1]=='M')
            sizeb=2;
        else if(s2[n-1]=='S')
            sizeb=1-n-1;

        if(sizea>sizeb)
            cout<<">";
        else if(sizea<sizeb)
            cout<<"<";
        else
            cout<<"=";
        cout<<ndl;
    }



}

