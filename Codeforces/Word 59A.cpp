#include<bits/stdc++.h>
using namespace std;

int main()
{


    string s;
    cin >>s;

    int n=s.length(),count=0,count2=0;


    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' &&s[i]<='z')
            count++;

        if(s[i]>='A' &&s[i]<='Z')
            count2++;
    }

    if(count>count2)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout <<s;
    }
    if(count2>count)
    {

        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout <<s;
    }
    if(count==count2)
    {

        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout <<s;
    }




}
