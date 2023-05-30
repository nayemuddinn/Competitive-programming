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

    ll a,b;

    cin>>a>>b;

    if(a>b)
        cout<<b<<" ";
    else
        cout<<a<<" ";

    if(abs(a-b)>1)
        cout<<abs(a-b)/2;
    else
        cout<<0;




}

