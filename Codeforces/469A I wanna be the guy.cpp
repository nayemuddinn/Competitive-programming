#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);
#define For(i,n)           for(ll i=0;i<n;i++)
#define For2(i,n)          for(ll i=1;i<=n;i++)
#define endl               "\n"
#define ll                 long long int
int main()
{
    first_in_out

    ll n,x,y,count=0;
    cin>>n>>x;
    ll a[x];


    For(i,x)
    {
        cin>>a[i];
    }

    cin>>y;
    ll b[y];

    For(i,y)
    {

        cin>> b[i];
    }


    For(i,x)
    {
        For(j,y)
        {
            if(a[i]==b[j])
            {
                for(ll k=j; k<y; k++)
                    b[k]=b[k+1];
                y--;
                j--;
            }
        }


    }

    if((x+y)==n)
        cout <<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}

