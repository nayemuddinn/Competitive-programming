#include<bits/stdc++.h>
using namespace std;

#define first_in_out      ios_base::sync_with_stdio(false);cin.tie(0);
#define For(i,n)          for(int i=0;i<n;i++)
#define endl               "\n"

int main()
{
    first_in_out;

    int n;
    double f=0;
    cin>>n;
    int a[n];

    For(i,n)
    {
        cin >>a[i];
        f+=(double)a[i]/100;

    }

    cout <<(f/n)*100;





}
