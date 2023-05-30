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
    cin>>t;
    string s;

    while(t--)
    {
        cin>>s;
        ll n=s.length();
        ll sum1=0,sum2=0;


        For(i,n/2)
        {
            sum1+=s[i]-'0';
        }

        for(ll i=n/2; i<n; i++)
        {
            sum2+=s[i]-'0';
        }

        if(sum1==sum2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;



    }




}

