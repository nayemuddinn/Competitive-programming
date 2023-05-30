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

    ll n,x;
    cin>>n;


    vector<int>v1;
    vector<int>v2;
    vector<int>v3;


    For2(i,n)
    {
        cin>>x;

        if(x==1)
            v1.push_back(i);
        if(x==2)
            v2.push_back(i);
        if(x==3)
            v3.push_back(i);

    }

    if(v1.empty() || v2.empty() ||v3.empty())
        cout<<0;
    else
    {
        ll minV=min(v1.size(),min(v2.size(),v3.size()));
        cout<<minV<<endl;
        For(i,minV)
        {
            cout<<v1[i]<< " "<<v2[i]<<" "<<v3[i]<<endl;
        }
    }

}






