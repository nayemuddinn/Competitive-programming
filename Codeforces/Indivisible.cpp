
/**
.
  author->  NATE
.
**/

#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl               "\n"
#define ll                 long long int

int main()
{
    first_in_out
    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n%2!=0)
            cout<<-1;
        else
        {
            for(int i=2;i<=n;i=i+2)
            cout<<i<<" "<<i-1<<" ";
        }
        cout<<ndl;
    }



}
