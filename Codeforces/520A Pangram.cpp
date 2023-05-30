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

    ll n;
    cin>>n;

    string s1;
    string s2="";
    int check[123]= {0};
    cin>>s1;

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);

    For(i,n)
    {
        if(check[s1[i]]==0)
        {
            check[s1[i]]=1;
            s2+=s1[i];
        }


    }


    if(s2.length()>=26)
        cout <<"YES";
    else
        cout <<"NO";






}

