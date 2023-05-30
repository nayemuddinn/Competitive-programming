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

    ll t,n,k,sum,cnt=0;

    cin>>t;

    while(t--)
    {

        cin>>n>>k;

        ll a[n],b[n];

        cnt=0;
        sum=0;

        For(i,n)
        cin>>a[i];


        For(i,n)
        cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);



        For(i,n)
        {
            if(cnt==k)
                break;
            For(j,n)
            {
                if(a[i]<b[j])
                {
                    swap(a[i],b[j]);
                }
            }
            cnt++;

        }

        For(i,n)
        sum+=a[i];


        cout<<sum<<endl;






    }



}
