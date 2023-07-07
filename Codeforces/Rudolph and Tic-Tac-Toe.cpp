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

    char s[3][3];

    while(t--)
    {
        ll x=0,p=0,o=0;
        ll rx=0,ro=0,rp=0;
        For(i,3)
        {
            For(j,3)
            {
                cin>>s[i][j];
            }
        }

        For(i,3)
        {
            rx=0,ro=0,rp=0;
            For(j,3)
            {
                if(s[i][j]=='X')
                    rx++;
                if(s[i][j]=='+')
                    rp++;
                if(s[i][j]=='O')
                    ro++;

            }

            if(rx==3)
                x++;
            if(rp==3)
                p++;
            if(ro==3)
                o++;

        }


        For(i,3)
        {
            rx=0,ro=0,rp=0;
            For(j,3)
            {
                if(s[j][i]=='X')
                    rx++;
                if(s[j][i]=='+')
                    rp++;
                if(s[j][i]=='O')
                    ro++;

            }

            if(rx==3)
                x++;
            if(rp==3)
                p++;
            if(ro==3)
                o++;

        }
        rx=0,ro=0,rp=0;
        For(i,3)
        {
            if(s[i][i]=='X')
                rx++;
            if(s[i][i]=='+')
                rp++;
            if(s[i][i]=='O')
                ro++;
        }


        if(rx==3)
            x++;
        if(rp==3)
            p++;
        if(ro==3)
            o++;

        rx=0,ro=0,rp=0;


        ll j=2;
        For(i,3)
        {
            if(s[i][j]=='X')
                rx++;
            if(s[i][j]=='+')
                rp++;
            if(s[i][j]=='O')
                ro++;
            j--;
        }


        if(rx==3)
            x++;
        if(rp==3)
            p++;
        if(ro==3)
            o++;


        if(x==p and x==o)
            cout<<"DRAW"<<ndl;
        else
        {
            if(max({x,o,p})==x)
                cout<<"X"<<ndl;
            if(max({x,o,p})==o)
                cout<<"O"<<ndl;
            if(max({x,o,p})==p)
                cout<<"+"<<ndl;
        }




    }



}

