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

    ll n,x,sereja=0,dima=0,flag1=0,flag2=0;

    cin>>n;

    ll a[n];

    For(i,n)
    cin>>a[i];



    ll i=0;
    ll j=n-1;
    while(true)
    {

        if(i>j)
            break;

        x=max(a[i],a[j]);

        if(x==a[i])
            i++;
        if(x==a[j])
            j--;


        if(flag1==0)
        {
            sereja+=x;
            flag1=1;
            flag2=0;
            continue;
        }
        if(flag2==0)
        {
            dima+=x;
            flag2=1;
            flag1=0;

        }

    }


    cout<<sereja<<" "<<dima;


}

