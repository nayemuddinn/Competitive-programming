#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,n,w;
    cin>>k>>n>>w;

    int price=0;


    for(int i=1;  i<=w; i++)
    {
        price+=(i*k);

    }

    int borrow=price-n;
    if(borrow<0)
        borrow=0;
    cout << borrow<<endl;




}
