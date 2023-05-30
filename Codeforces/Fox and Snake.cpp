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

    ll r,c,flag=0,flag2=0;
    cin>>r>>c;

    For2(i,r)
    {
        For2(j,c)
        {
            if(i%2==0)
            {
                if(j==c && flag2==1)
                {
                    flag2=0;
                    continue;
                }

                if(j==c && flag==0)
                {
                    flag=1;
                    cout<<"#";
                    break;
                }

                if(j==1  && flag==1)
                {
                    flag=0;
                    flag2=1;
                    cout<<"#";

                }

                cout<<".";
            }
            else
            {
                cout<<"#";
            }

        }
        cout<<endl;

    }




}

