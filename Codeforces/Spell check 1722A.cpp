/**
.
  author->  NATE
.
**/

#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define ndl               "\n"
#define ll                 long long int

int main()
{
    first_in_out


    ll t,n;
    string s;
    cin>>t;



    while(t--)
    {
        cin>>n;
        cin>>s;
        ll f1=0,f2=0,f3=0,f4=0,f5=0;
        ll d=0;

           For(i,n){

               if(s[i]=='T'){
                 f1++;
                 continue;
               }

               if(s[i]=='i') {
                 f2++;
                 continue;}
               if(s[i]=='m') {
                 f3++;
                 continue;
               }
               if(s[i]=='u') {
                 f4++;
                 continue;
               }
               if(s[i]=='r') {
                 f5++;
                 continue;}
                 if(s[i]!='T' || s[i]!='i' || s[i]!='m' || s[i]!='u' || s[i]!='r')
                 {
                    d=1;
                    break;
                 }

           }

           if(d==1)
             {
                 cout<<"NO"<<ndl;
                 continue;
             }
             else {

           if(f1==1 && f2==1 && f3==1 && f4==1 && f5==1)
              cout<<"Yes"<<ndl;
              else
              cout<<"NO"<<ndl;
             }

    }


}
