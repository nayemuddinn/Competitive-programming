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

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    ll n=s3.length(),cnt=0;

    For(i,s1.length())
    {
        For(j,n)
        {
            if(s1[i]==s3[j])
            {
                cnt++;
                for(int k=j; k<n; k++)
                {
                    s3[k]=s3[k+1];
                }
                j--;
                n--;
                break;

            }
        }
    }

    if(cnt==s1.length() && n==0)
        cout<<"YES";
    else
        cout<<"NO";

}

