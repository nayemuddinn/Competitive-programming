#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;

    cin >> n;

    char s[n];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<n-1; i++)
    {
        int j=i+1;

        if(s[i]==s[j])
            count++;

    }



    cout << count;







}
