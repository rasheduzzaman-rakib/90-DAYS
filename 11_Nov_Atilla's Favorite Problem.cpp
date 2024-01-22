
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m[3],d;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        d=s[n-1]-'a';
        cout<<d+1<<endl;

    }
}
