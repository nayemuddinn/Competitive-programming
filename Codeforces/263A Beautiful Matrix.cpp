#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5][5],x;


    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >>x;

            if(x==1)
            {
                x=abs(i-3)+abs(j-3);
                 cout << x;
            }
        }

    }

    }

