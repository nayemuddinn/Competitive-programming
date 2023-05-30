#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n][2];
    int exit=0,enter=0,cap=0,max=-999;

    for(int i=0; i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }


    for(int i=0; i<n;i++)
    {

            exit +=a[i][0];
            enter +=a[i][1];
            cap=enter-exit;

            if(max<cap)
                max=cap;


    }
     cout <<max;






}


