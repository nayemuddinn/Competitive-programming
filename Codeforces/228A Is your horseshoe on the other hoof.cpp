#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(0);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
    first_in_out;

    ll a[4],count=0;


    For(i,4)
    cin>>a[i];

    For(i,3)
    {
        if(a[i]==a[i+1])
        {
            count++;
            continue;
        }

        for(int j=i+1; j<4; j++)
        {

            if(count==3)
                break;
            if(a[i]==a[j])
                count++;

        }

    }

    cout<<count;



}

