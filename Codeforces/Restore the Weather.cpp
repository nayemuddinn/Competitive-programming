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
#define ndl                "\n"
#define ll                 long long int
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define sortV(v)           sort(v.begin(),v.end())


int main()
{
    first_in_out

    ll t,n,k,x;
    cin>>t;



    while(t--)
    {
        cin>>n>>k;

        vector<pair<int,int>>a;
        ll b[n];

        For(i,n)
        {
            cin>>x;
            a.push_back(make_pair(x,i));          //pushing value and index
        }

        For(i,n)
        cin>>b[i];

        sortV(a);                                 //sorting by values
        sort(b,b+n);



        ll ans[n];

        For(i,n)
        ans[a[i].second]=b[i];                     //putting b array value in a vector indexs


        For(i,n)
        cout<<ans[i]<<" ";

        cout<<ndl;




    }





}

