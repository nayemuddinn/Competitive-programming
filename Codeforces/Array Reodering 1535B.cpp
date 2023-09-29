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
#define For3(i, j, n)      for (int i = j; i <= n; i++)
#define For4(i,n)          for(int i=n-1; i>=0; i--)
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())



int main()
{
    first_in_out

    ll t,n,x;
    cin>>t;

    vector<ll>v1,v2,a;

    while(t--)
    {
        cin>>n;

        ll c=0,j=0;

        v1.clear(),v2.clear(),a.clear();
        a.resize(n+1,0);


        For(i,n)
        {
            cin>>x;

            if(x%2==0)
                v1.pb(x);
            else
                v2.pb(x);

        }

        sortV(v1),sortV(v2);

        For(i,v1.size())
        {
            a[i]=v1[i];
            j=i;
        }

        if(v1.size()==0)
            j=-1;

       for(ll i=j+1,k=0; k<v2.size(); i++,k++)
            a[i]=v2[k];


        For(i,n-1)
        {
            for(j=i+1; j<n; j++)
            {
                if(__gcd(a[i],2*a[j])>1)
                    c++;
            }
        }

        cout<<c<<ndl;
    }



}

