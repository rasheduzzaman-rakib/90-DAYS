#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];

        int cnt = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0)
            cnt++;
            else{
                ans = max(ans,cnt);
                cnt = 0;
            }
        }
        ans = max(ans,cnt);
        cout<<ans<<endl;
    }
    return 0;
}

