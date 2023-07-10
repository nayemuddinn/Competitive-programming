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

    ll t,n;
    cin>>t;
    string s,a;


    while(t--)
    {
        cin>>n>>s;

        ll check[1234]= {0};
        a.clear();


        transform(s.begin(),s.end(),s.begin(),::tolower);

        For(i,n-1)
        {
            if(s[i]!=s[i+1])
                a+=s[i];

        }

        a+=s[n-1];

        if(a=="meow")
            cout<<"YES"<<ndl;
        else
            cout<<"NO"<<ndl;





    }



}
 
