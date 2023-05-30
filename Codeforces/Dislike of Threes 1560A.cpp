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


    ll n,x,t;


    int a[1001];

    ll j=1;
    For2(i,1666)
    {
        if(i%3!=0 && i%10!=3)
        {
            a[j]=i;
            j++;

        }
    }


    cin>>t;

    For(i,t)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }




}

