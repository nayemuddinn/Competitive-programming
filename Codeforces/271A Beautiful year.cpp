#include<bits/stdc++.h>
using namespace std;
vector<int> v;

void vect(int n)
{
    for(int i=0; i<=4; i++)
    {

        int last=n%10;
        v.push_back(last);
        n=n/10;
    }


}
int main()
{

    int n;

    cin>>n;

    int count=n+1,flag=0;
    vect(count);


    while(true)
    {
        flag=0;
        for(int i=0; i<3; i++)
        {
            for(int j=i+1; j<4; j++)
            {


                if(v[i]==v[j])
                {
                    count++;
                    v.clear();
                    vect(count);
                    break;
                }
                else
                {

                    flag++;
                }


            }

        }
        if(flag==6)
        {
            cout<<count;
            break;
        }




    }




}




