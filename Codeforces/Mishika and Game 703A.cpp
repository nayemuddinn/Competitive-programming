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

    ll n,a,b,m=0,c=0;

    cin>>n;

    For(i,n)
    {
        cin>>a>>b;

        if(a>b)
            m++;
        if(b>a)
            c++;

    }

    if(m>c)
        cout<<"Mishka";
    else if(m<c)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";


}

