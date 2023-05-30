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

    ll a,b,t;
    cin>>t;



    For(i,t)
    {
        cin>>a>>b;

        if(a<b && (b-a)%10==0)
            cout<<(b-a)/10<<endl;
        if(a<b && (b-a)%10!=0)
            cout<<(b-a)/10+1<<endl;
        if(a>b && (a-b)%10==0)
            cout<<(a-b)/10<<endl;
        if(a>b && (a-b)%10!=0)
            cout<<(a-b)/10+1<<endl;
        if(a==b)
            cout<<0<<endl;

    }





}

