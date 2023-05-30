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
    vector<int>vec;
    ll t,last=0,n,digit=0,j;
    cin>>t;
    ll a[t];


    For(i,t)
    {
        cin>>a[i];
        n=a[i];
        digit=0;
        j=1;
        last=0;
        vec.clear();
        while(n!=0)
        {
            digit++;
            last=n%10;
            if(last!=0)
            vec.push_back(last*j);
            j*=10;
            n=n/10;
        }
        if(t==1 &&digit==1)
        {
            cout<<t<<endl<<a[i];
            break;
        }
        cout<<vec.size()<<endl;

        For(i,vec.size())
        cout<<vec[i]<<" ";
        cout<<endl;


    }







}

