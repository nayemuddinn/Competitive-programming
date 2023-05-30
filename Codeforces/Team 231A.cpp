#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j,count,count2=0;
    cin >> n;
    int set[n][3];

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> set[i][j];
        }
    }



    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<3; j++)
        {

            if(set[i][j]==1)
                count++;
            if(count>1)
            {
                count2++;
                break;
            }

        }

    }
    cout << count2;

}
