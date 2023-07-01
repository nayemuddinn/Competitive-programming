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

    ll t,n,c;
    cin>>t;

    set<int>s;

    while(t--)
    {
        cin>>n;
        c=0;
        s.clear();

        ll i=1;
        while(true)
        {

            // cout<<pow(i,2)<<" "<<pow(i,3)<<ndl;

            if(pow(i,2) >n)
                break;

            if(pow(i,2)<=n)
                s.insert(pow(i,2));

            if(pow(i,3)<=n)
                s.insert(pow(i,3));

            i++;
        }
        cout<<s.size()<<ndl;

//        for(auto it : s)
//            cout<<it<<ndl;
    }



}

