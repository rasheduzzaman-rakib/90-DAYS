#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int l=n-4;
        if(n<9)cout<<0<<endl;
        else if(l%3==2) cout<<l/3<<endl;
        else cout<<l/3-1<<endl;
    }
    return 0;
}
