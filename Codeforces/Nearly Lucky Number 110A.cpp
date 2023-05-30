#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int n,count=0,last=-22,c=0;
    cin>>n;

    int i=0;


    while(n!=0)
    {

        last=n%10;
        n=n/10;

        if(last==4 || last==7)
            count++;
            i++;

    }

    if(count==4 || count==7)
        cout <<"YES";
    else
        cout <<"NO";



}
