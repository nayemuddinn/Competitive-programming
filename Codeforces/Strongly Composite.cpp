#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define endl               "\n"
#define ll                 long long int

ll cnt_prime=0;
ll cnt_com=0;
void check_prime(int n)
{

    bool prime=true;
    for(ll i=2; i<n; i++)
    {
        if(n==2)
        {
            cnt_prime++;
            continue;
        }

        if(n%i==0)
            prime=false;
    }

    if(prime)
        cnt_prime++;
    else
        cnt_com++;




}


int main()
{
    first_in_out

    ll t,n;
    ll product;
    cin>>t;

    while(t--)
    {
        cin>>n;

        ll a[n];

        product=1;

        cnt_prime=0;
        cnt_com=0;


        For(i,n)
        {
            cin>>a[i];
            product*=a[i];
        }


        cout<<product<<endl;



        for(ll i=2; i<=product; i++)
        {

            if(product%i==0)
            {
                check_prime(i);

            }
        }



        cout<<cnt_prime<<" "<<cnt_com;



    }



}




