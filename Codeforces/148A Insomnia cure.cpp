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

    ll k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;

    if(k==1)
        cout<<d;
    else
    {
        For2(i,d)
        {
            if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
                cnt++;
        }
        cout<<d-cnt;

    }








}

