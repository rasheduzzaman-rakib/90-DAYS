#include <iostream>

using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int p=0,q,i;
        for(i=0;i<n;i++){
            cin>>q;
            if(q==1) p++;
        }
        if(p==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

