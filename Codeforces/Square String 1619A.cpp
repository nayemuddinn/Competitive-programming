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
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl               "\n"
#define ll                 long long int

int main()
{
    first_in_out

    ll t;
    cin>>t;
    string s;
    string s1,s2;


    while(t--)
    {
        cin>>s;
        ll n=s.length();

        s1.clear();
        s2.clear();
        if(n%2==0)
        {
            For(i,n/2)
            s1+=s[i];

            for(int i=n/2; i<n; i++)
                s2+=s[i];

            if(s1==s2)
                cout<<"YES"<<ndl;
            else
                cout<<"NO"<<ndl;



        }
        else
            cout<<"NO"<<ndl;




    }

}

