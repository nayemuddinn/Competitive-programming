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

    int n, count = 0;
    cin >> n;

    while (n!=0)
    {


        if (n>=100 )
        {
            count++;
            n = n-100;
            continue;

        }

        if (n>=20)
        {
            count++;
            n=n-20;
            continue;
        }


        if (n>=10)
        {
            count++;
            n = n-10;
            continue;

        }

        if (n>=5)
        {
            count++;
            n=n-5;
            continue;

        }

        if (n>=1)
        {
            count++;
            n=n-1;


        }
    }

    cout << count;



}

