#include<bits/stdc++.h>
using namespace std;
int main()
{


    char s[100];


    cin >>s;

    int n=strlen(s);
    int repeat[123]= {0};
    string result="";

    for(int i=0; i<n; i++)
    {
        if(repeat[s[i]]==0)
        {
            repeat[s[i]]=1;
            result+=s[i];
        }

    }




    n=result.length();


    if(n%2==0)
        cout <<"CHAT WITH HER!";
    else
        cout <<"IGNORE HIM!";
}


            /////  DIFFERENT APPROACH   ////


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//
//
//    char s[100];
//
//
//    cin >>s;
//
//    int n=strlen(s);
//
//    for(int i=0; i<n-1; i++)
//    {
//        for(int j=i+1; j<n; j++)
//        {
//            if(s[i]==s[j])
//            {
//                for(int k=j; k<n; k++)
//                {
//                    s[k]=s[k+1];
//                }
//                n--;
//                j--;
//            }
//
//        }
//
//
//    }
//
//
//
//    if(n%2==0)
//        cout <<"CHAT WITH HER!";
//    else
//        cout <<"IGNORE HIM!";
//
//}
//





