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

    ll n,total=0,prev=0,solve=0;
    cin>>n;
    ll a[n];

    For(i,n)
    cin>>a[i];

    For(i,n)
    {

        if(a[i]==-1)
            total++;


        if(a[i]>0)
            prev+=a[i];

        if(a[i]==-1 && prev>0)
        {
            prev=prev-1;
            solve++;
        }

    }


    cout<<(total-solve);



}

