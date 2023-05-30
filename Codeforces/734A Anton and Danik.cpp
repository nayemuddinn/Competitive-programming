#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,count=0,count2=0;
      cin>>n;
     char s[n];
     cin >>s;

     for(int i=0; i<n;i++)
     {
         if(s[i]=='A')
            count++;
         if(s[i]=='D')
            count2++;

     }

     if(count>count2)
        cout<<"Anton";
     else if(count<count2)
        cout <<"Danik";
     else
        cout <<"Friendship";


}

