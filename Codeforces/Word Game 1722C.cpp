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

    ll t,n;
    cin>>t;



    map<string,ll>m;
    while(t--)
    {
        cin>>n;

        string s[3][n],x;
        ll ans[3]= {0};
        m.clear();


        For(i,3)
        {

            For(j,n)
            {
                cin>>s[i][j];
                m[s[i][j]]++;
            }
        }


        For(i,3)
        {
            For(j,n)
            {
                x=s[i][j];

                if(m[x]==1)
                    ans[i]+=3;
                else if(m[x]==2)
                    ans[i]+=1;

            }

        }



        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<ndl;

    }



}

