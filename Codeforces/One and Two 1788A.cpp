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

    while(t--)
    {
        cin>>n;

        ll a[n],two=0,check=0;


        For(i,n)
        {
            cin>>a[i];

            if(a[i]==2)
                two++;
        }




        if(two%2!=0)
            cout<<-1<<ndl;
        else
        {
            For(i,n)
            {
                if(a[i]==2)
                    check++;

                if(check==two/2)
                {
                    cout<<i+1<<ndl;
                    break;
                }
            }
        }


    }





}
