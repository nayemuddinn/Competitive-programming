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

    ll t,rating;
    cin>>t;

    while(t--)
    {
        cin>>rating;

        if(1900<=rating)
            cout<<"Division 1"<<endl;

        if(1600<=rating  && rating<=1899)
            cout<<"Division 2"<<endl;

        if(1400<=rating && rating<=1599)
            cout<<"Division 3"<<endl;
        if(rating<=1399)
            cout<<"Division 4"<<endl;
    }





}

