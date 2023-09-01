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

    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>s;


        if(s[0]=='1')
            cout<<"13";
        if(s[0]=='2')
            cout<<"23";
        if(s[0]=='3')
            cout<<"31";
        if(s[0]=='4')
            cout<<"41";
        if(s[0]=='5')
            cout<<"53";
        if(s[0]=='6')
            cout<<"61";
        if(s[0]=='7')
            cout<<"71";
        if(s[0]=='8')
            cout<<"83";
        if(s[0]=='9')
            cout<<"97";

            cout<<ndl;
    }



}

