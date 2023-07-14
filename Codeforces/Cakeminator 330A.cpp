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

    ll r,c,row=0,col=0;
    bool Evil=false;

    cin>>r>>c;

    char a[r][c];

    For(i,r)
    {
        Evil=false;
        For(j,c)
        {
            cin>>a[i][j];

            if(a[i][j]=='S')
                Evil=true;

        }

        if(!Evil)
            row++;
    }

    Evil=false;

    For(i,c)
    {
        Evil=false;
        For(j,r)
        {
            if(a[j][i]=='S')
                Evil=true;
        }

        if(!Evil)
            col++;
    }



    cout<<row*c+col*r-(row*col)<<ndl;


}
