#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,ans;
    cin>>n>>h;
    ans=n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h) ans++;
    }
    cout<<ans<<endl;

}
