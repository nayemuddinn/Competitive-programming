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

        ll a[n],b[n];
        ll minA=999999999999,minB=999999999999;
        ll cnt=0;

        For(i,n)
        {
            cin>>a[i];
            minA=min(a[i],minA);
        }

        For(i,n)
        {
            cin>>b[i];
            minB=min(b[i],minB);
        }


        For(i,n)
        {

            cnt+=max(a[i]-minA,b[i]-minB);

        }

        cout<<cnt<<ndl;


    }







}
