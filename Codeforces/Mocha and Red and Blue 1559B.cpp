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


void print(ll c,char last)
{
    if(c%2==0)
    {
        if(last=='B')
        {
            For(i,c/2)
            cout<<"BR";

        }
        else
        {
            For(i,c/2)
            cout<<"RB";
        }
    }
    else
    {
        if(last=='R')
        {
            For(i,c)
            {
                if(i%2==0)
                    cout<<"B";
                else
                    cout<<"R";
            }

        }
        else
        {
            For(i,c)
            {
                if(i%2==0)
                    cout<<"R";
                else
                    cout<<"B";
            }
        }
    }

}


int main()
{
    first_in_out

    ll t,n,c;
    string s;
    char last;
    cin>>t;

    while(t--)
    {
        cin>>n>>s;
        c=0;
        last='K';

        For(i,n)
        {
            if(s[i]=='?')
                c++;
            else
            {
                last=s[i];
                print(c,last);
                cout<<last;
                c=0;

            }


        }

        if(c!=0)
        {
            if(last=='K')
            {
                For(i,n)
                {
                    if(i%2==0)
                        cout<<"B";
                    else
                        cout<<"R";
                }
            }
            else
            {
                if(c%2==0)
                {
                    if(last=='B')
                    {
                        For(i,c/2)
                        cout<<"RB";

                    }
                    else
                    {
                        For(i,c/2)
                        cout<<"BR";
                    }
                }
                else
                {
                    if(last=='R')
                    {
                        For(i,c)
                        {
                            if(i%2==0)
                                cout<<"B";
                            else
                                cout<<"R";
                        }

                    }
                    else
                    {
                        For(i,c)
                        {
                            if(i%2==0)
                                cout<<"R";
                            else
                                cout<<"B";
                        }
                    }
                }
            }
        }

        cout<<ndl;


    }
}

