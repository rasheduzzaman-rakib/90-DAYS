#include<iostream>
using namespace std;
int main()
{
    int t,a,b,m,n;
    cin>>t; //t=test case
    for(int i=0; i<t; i++)
        {
        cin>>a>>b;
        if(a%b==0)
        cout<<0<<endl;
        else{
            m= a/b;
            n= (m+1)*b;
            cout<<n-a<<endl;
        }
    }
    return 0;
}


