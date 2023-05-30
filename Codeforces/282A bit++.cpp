#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X=0,n;

    cin >>n;
    string o[n];


    for(int i=0; i<n; i++)
    {
        cin >> o[i];
    }


    for(int i=0; i<n; i++)
    {

        if(o[i]=="X++" || o[i]=="++X")
            X=X+1;
        if(o[i]=="X--" || o[i]=="--X")
            X=X-1;
    }

    cout <<X;






}
