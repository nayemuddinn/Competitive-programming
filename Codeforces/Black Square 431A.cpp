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

    ll a,b,c,d,cnt=0,x;
    string s;
    cin>>a>>b>>c>>d>>s;


    For(i,s.length())
    {
        x=s[i]-'0';

        if(x==1)
            cnt+=a;
        if(x==2)
            cnt+=b;
        if(x==3)
            cnt+=c;
        if(x==4)
            cnt+=d;
    }
    cout<<cnt;




}

