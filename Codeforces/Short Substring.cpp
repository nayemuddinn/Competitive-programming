#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
    first_in_out

    ll t;
    string s,s2;
    cin>>t;

    For(j,t)
    {
        cin>>s;
        s2.clear();

        For(i,s.length())
        {
            if(i>0 && s[i]==s[i+1])
            {

                s2+=s[i];
                i++;
                continue;
            }
                s2+=s[i];

        }

        cout<<s2<<endl;



    }



}

