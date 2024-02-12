#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0,ans;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<11)
            {
                if(b>c)
                {
                    c=b;
                    ans=i+1;
                }
            }
        }
        cout<<ans<<endl;
    }
}
