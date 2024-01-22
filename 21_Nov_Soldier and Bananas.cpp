#include<iostream>
using namespace std;

int main()
{
    int k,n,w,d;

    int sum=0;
    cin>>k>>n>>w;

    for(int i=0;i<=w;i++)
    {
        sum=sum+i;
    }

    d=(sum*k)-n;
    if(d<0) cout<<"0";
    else cout<<d;

    return 0;
}
