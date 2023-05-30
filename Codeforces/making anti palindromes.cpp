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

    ll t,n;
    cin>>t;

    string s;
    map<char,int> mapp;

    while(t--)
    {
        cin>>n>>s;

        int maxChar=0;
        int cnt=0;

        mapp.clear();

        if(n%2!=0)
        {
            cout<<-1<<ndl;
            continue;
        }
        else
        {
            For(i,n)
            {
                mapp[s[i]]++;                               //a single character frequency

                maxChar=max(maxChar,mapp[s[i]]);            //storing the max frequency for a single character
            }


            if(maxChar>n/2)                                 // if a single character is exists more then n/2 times than anti palindrome isn't possible
            {
                cout<<-1<<ndl;
                continue;
            }

            mapp.clear();
            maxChar=0;

            For(i,n/2)
            {
                if(s[i]==s[n-i-1])
                {
                    mapp[s[i]]++;
                    cnt++;
                    maxChar=max(maxChar,mapp[s[i]]);
                }
            }

            //  (cnt+1)/2 -->> swapping between n/2                number of moves, (cnt+1);incase of odd numbers


            maxChar=max(maxChar,(cnt+1)/2);                //incase of a random example  "bbbcaa" , cant swap between n/2, in such case the answer will be the max frequency of the character
            cout<<maxChar<<ndl;
        }
    }


}
