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

    ll t,n,cnt,cnt1,cnt2;
    cin>>t;

    For(m,t)
    {
        cin>>n;

        ll a[n];
        cnt1=0;
        cnt2=0;
        cnt=0;

        For(i,n)
        {
            cin>>a[i];

                 if(i%2==0 && a[i]%2==0  ||  i%2!=0 && a[i]%2!=0  )
                 cnt++;

                 if(i%2==0  && a[i]%2!=0)
                    cnt1++;

                 if(i%2!=0  && a[i]%2==0)
                    cnt2++;


        }

        if(cnt==n){
            cout<<0<<endl;
         continue;
        }

        if(cnt1==cnt2)
            cout<<cnt1<<endl;
            else
                cout<<-1<<endl;



    }
}


