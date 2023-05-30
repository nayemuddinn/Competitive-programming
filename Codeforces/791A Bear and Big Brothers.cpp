#include<bits/stdc++.h>
using namespace std;
int main()
{


   int a,b,count=0;
   cin>>a>>b;

   while(true)
   {

       if(a>b)
        break;
       a*=3;
       b*=2;
       count++;

   }
     cout << count<<endl;








}
