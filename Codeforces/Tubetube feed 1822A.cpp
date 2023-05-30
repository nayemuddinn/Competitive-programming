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

    ll q,n,t,cnt,maxx;
    vector<int>vec;
    cin>>q;



    For(o,q)
    {
        cin>>n>>t;
        cnt=0;
        ll a[n];
        ll b[n];

        For2(i,n)
        cin>>a[i];

        maxx=0;
        cnt=-1;

        For2(i,n)
        cin>>b[i];





        For2(i,n)
        {
            if(a[i]+(i-1)<=t && b[i]>maxx)
            {
                cnt=i;
                maxx=b[i];

            }

        }

        cout<<cnt<<endl;



    }





}
 
