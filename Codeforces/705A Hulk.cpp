#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(0);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)           for(int i=1;i<=n;i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
    first_in_out;

    int n;
    cin>>n;


    For2(i,n)
    {
        if(n==1)
        {
            cout<<"I hate it ";
        }


        else if(i==n)
        {
            if(i%2==0)
                cout<<"I love it ";
            else
                cout<<"I hate it ";
        }
        else
        {

            if(i%2==0)
                cout<<"I love that ";
            else
                cout<<"I hate that ";
        }


    }





}

