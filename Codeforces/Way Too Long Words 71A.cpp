#include<bits/stdc++.h>
using namespace std;
int main()
{


    int x;
    cin>>x;

    string s[x];

    for(int i=0; i<x; i++)
    {
        cin >> s[i];

    }


    for(int i=0;  i<x; i++)
    {
        string str=s[i];
        int len=str.length();
          int j=0;
        while(str[j]!='\0')
        {



            if(len<=10)
            {
                cout << str;
                break;
            }

            else
            {
                cout <<str[0]<<len-2<<str[len-1];
                break;

            }
            j++;
        }
        cout<<endl;
    }

}
