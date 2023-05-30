#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    cin >> s1>>s2;
    int i=0;

    while(s1[i]!='\0')
    {

        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);


        i++;

    }

    if(s1>s2)
    {
        cout << "1";

    }



    if(s1<s2)
    {
        cout << "-1";

    }


    if(s1==s2)
    {
        cout << "0";

    }













}
