#include<iostream>
using namespace std;
int main()
{
    int t;
    long long L,R,l,r;
    cin>>t;
    while(t--)
        {
            cin>>L>>R>>l>>r;
            if(R == r)cout<<R-1<<" "<<r<<endl;
            else cout<<R<<" "<<r<<endl;
    }
}
