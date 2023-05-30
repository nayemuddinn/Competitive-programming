#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,t,j,i;
    cin>>n>>t;
    char s[n];
    cin >>s;


    for(int i=0; i<t; i++)
    {
        if(i>t)
            break;
        for(int j=0; j<n-1; j++)
        {
            if(s[j]=='G')
                continue;

            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;

            }
        }


    }
    cout <<s;



}
