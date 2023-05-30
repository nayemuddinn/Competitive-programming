#include<bits/stdc++.h>
using namespace std;
int main()
{


    char s[100];
    int i=0,j=0,len=0;
    cin >>s;
    int num[100];

    for(int i=0; i<strlen(s); i++)
    {

        if(s[i]=='+')
            continue;

        if(s[i]=='\0')
            break;

        num[len]=s[i]-'0';



        len++;

    }

    for(int i=0; i<len-1; i++)


    {
        int  min=i;
        for(j=i+1; j<len; j++)
        {

            if(num[j]<num[min])
                min=j;

        }

        if(min!=i)
            swap(num[i],num[min]);

    }

    for(int k=0; k<len; k++)

    {

        cout << num[k];
        if(k<len-1)
            cout <<"+";
    }







}
