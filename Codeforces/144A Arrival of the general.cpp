#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)       for (int i = j; i <= n; i++)
#define endl               "\n"
#define ll                 long long int

int main()
{
    first_in_out

    ll n,i,count=0,flag=0;
    ll minIndex,maxIndex;
    cin>>n;

    ll a[n],j=n-1;

    For(i,n)
    cin>>a[i];

    ll max=-9999,min=1000;


    For(i,n)
    {
        if(a[i]<min)
        {
            min=a[i];
            minIndex=i;
            for(int j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    minIndex=j;
                    min=a[j];
                }
            }

        }
        if(a[i]>max)
        {
            max=a[i];
            maxIndex=i;
            if(a[i]==max)
            {
                maxIndex=i;
                max=a[i];

            }
        }
    }




    For(i,n)
    {

        if(minIndex!=(n-1))
        {
            swap(a[minIndex],a[minIndex+1]);
            count++;


            minIndex++;

            if(minIndex==maxIndex)
            {

                swap(minIndex,maxIndex);
                count--;
            }
            if(minIndex+1==maxIndex)
            {
                ll aa=minIndex+1;
                swap(aa,maxIndex);
                continue;
            }
        }

        if(maxIndex!=0)
        {
            swap(a[maxIndex],a[maxIndex-1]);
            maxIndex--;
            count++;
        }

    }


    cout<<count;

//Although I did it the worst, you can do better.



          //////    OR-> you can write     /////

//    if(maxIndex>minIndex)
//    {
//        minIndex++;
//    }
//    cout<<maxIndex+(n-1)-minIndex<<endl;




}
