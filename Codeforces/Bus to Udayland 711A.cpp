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

    ll n,f=0;

    cin>>n;
    string s[n];
    string a;

    For(i,n)
    {
        cin>>s[i];
        a=s[i];



        if(f==0 and a[0]=='O' and a[1]=='O' )
        {
            a[0]='+';
            a[1]='+';
            f=1;
        }
        else if( f==0 and a[3]=='O' and a[4]=='O')
        {
            a[3]='+';
            a[4]='+';
            f=1;
        }
        s[i]=a;


    }

    if(f==1)
    {
        cout<<"YES"<<ndl;
        For(i,n)
        cout<<s[i]<<ndl;
    }
    else
        cout<<"NO"<<ndl;






}

