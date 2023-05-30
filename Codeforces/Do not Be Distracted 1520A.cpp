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

    ll t,n,flag=0;
    cin>>t;
     char s[100];

    ll j;

    For(u,t)
    {
        cin>>n;


        cin>>s;
        flag=0;

        For(i,n)
        {
            if(s[i]==s[i+1])
            {
                for( j=i; j<n; j++)
                {
                    s[j]=s[j+1];

                }
                i--;
                n--;


            }


        }


        For(i,strlen(s))
        {
            for(j=i+1; j<strlen(s); j++)
            {
                if(s[i]==s[j])
                {
                    flag=1;
                    break;
                }
            }
        }



        if(flag==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;



    }






}
