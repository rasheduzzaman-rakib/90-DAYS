
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        int c=0,d=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                d+=a[i];
            }
            else
            {
                c+=a[i];
            }
        }
        if(d<c) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }
}
