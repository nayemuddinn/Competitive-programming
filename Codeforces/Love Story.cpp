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

    string s1,s2="codeforces";


    while(t--)
    {
        cin>>s1;
        ll cnt=0;

        For(i,10)
        {

            if(s1[i]!=s2[i])
                cnt++;
        }

        cout<<cnt<<ndl;

    }


}
