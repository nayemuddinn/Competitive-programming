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

    vector<int>v;
    ll t,n,sum1=0,sum2=0;
    cin>>t;




    For(i,t)
    {
        cin>>n;
        sum1=0;
        sum2=0;
        v.clear();

        for(int i=2; i<=n; i+=2)
        {
            sum1+=i;
            v.push_back(i);


        }

        for(int i=1; i<=n; i+=2)
        {

         if(i==n-1 && n!=2)
            {
                int x=sum1-sum2;

                if(x%2!=0)
                {
                    v.push_back(x);
                    sum2+=x;
                    break;
                }
            }
            sum2+=i;
            v.push_back(i);


        }


        if(sum1==sum2)
        {
            cout<<"YES"<<endl;

            For(i,v.size())
            {
                cout <<v[i]<<" ";

            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;


    }

}

