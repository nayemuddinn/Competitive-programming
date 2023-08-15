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

    ll n,num;

    cin>>n;
    num=n;
    bool check=0;


    while(n!=0)
    {
        if(n%10!=4 and n%10!=7)
            check=1;
        n=n/10;
    }
    if(num%7==0 or num%4==0 or num%77==0 or num%44==0 or num%47==0 or num%74==0 or !check)
        cout<<"YES";
    else
        cout<<"NO";

}

